/*   

    ***************************
    *
    ***************************

     __________________________
    |
    |__________________________

      /_________________________
     /
    /_________________________

    
    •
    •
    •

*/
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <curl/curl.h>
#include <jsoncpp/json/json.h>

// Define your qBittorrent API endpoint and authentication token
const std::string API_URL = "http://localhost:8080/api/v2/";
const std::string API_TOKEN = "YOUR_API_TOKEN";

// Function to send a GET request to the qBittorrent API
static std::string sendGetRequest(const std::string& url) {
    CURL* curl = curl_easy_init();
    std::string response;

    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_USERPWD, API_TOKEN.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, [](void* buffer, size_t size, size_t count, void* user) {
            ((std::string*)user)->append((char*)buffer, 0, size * count);
            return size * count;
        });
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

        CURLcode res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);

        if (res != CURLE_OK) {
            std::cerr << "Failed to perform HTTP request: " << curl_easy_strerror(res) << std::endl;
        }
    } else {
        std::cerr << "Failed to initialize libcurl" << std::endl;
    }

    return response;
}

int main() {
    // Get a list of all torrents from qBittorrent
    std::string torrentsInfo = sendGetRequest(API_URL + "torrents/info");

    // Parse the JSON response
    Json::Reader reader;
    Json::Value root;

    if (!reader.parse(torrentsInfo, root)) {
        std::cerr << "Failed to parse JSON response." << std::endl;
        return 1;
    }

    // Iterate through the torrents
    for (const Json::Value& torrent : root) {
        std::string name = torrent["name"].asString();
        std::string category = torrent["category"].asString();
        int state = torrent["state"].asInt();

        // Check if the torrent is completed and has the "Movie" or "Series" category
        if (state == 5 && (category == "Movie" || category == "Series")) {
            std::string savePath = torrent["save_path"].asString();

            // Run a command to extract .rar files using unrar
            std::string unrarCommand = "unrar x \"" + savePath + "/" + name + "\" \"" + savePath + "\"";
            int unrarResult = std::system(unrarCommand.c_str());

            if (unrarResult == 0) {
                std::cout << "Extracted: " << name << std::endl;
            } else {
                std::cerr << "Failed to extract: " << name << std::endl;
            }
        }
    }

    return 0;
}
