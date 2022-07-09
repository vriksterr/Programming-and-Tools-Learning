/*
    Find Displacement: Given a long router containing N,S,E,W directions, find the shortest path to reach the
    location.

    sample Input: SNNNEWE
    sample Output: NNE


*/

#include<iostream>
using namespace std;

int main(){

    char route[1000];
    cin.getline(route,1000);

    int x{},y{};

    for(int i{}; route[i] != '\0'; i++){    // as cin.getline replaces the end from \n to \0 we run this loop till its is not a null character

        switch(route[i]){
            case 'N': y++;
                break;
            case 'S': y--;
                break;
            case 'E': x++;
                break;
            case 'W': x--;
                break;
        }
    }
    
    cout<<"Final x and y is "<<x<<", "<<y<<endl;

    // now we checking in which quadrant of north,south,east,west it lies

    //For North East
    if(x>=0 && y>=0){

        while(y--){     //it will keep running this loop on each run y decreases by 1 until it reaches 0 
            cout<<"N";
        }
        while(x--){
            cout<<"E";
        }
    }

    //For North West
    if(x<=0 && y>=0){

        while(y--){
            cout<<"N";
        }
        while(x++){
            cout<<"W";
        }
    }

    //For South West
    if(x<=0 && y<=0){

        while(y++){
            cout<<"S";
        }
        while(x++){
            cout<<"W";
        }
    }

    //For South East
    if(x>=0 && y<=0){

        while(y++){
            cout<<"N";
        }
        while(x--){
            cout<<"E";
        }
    }

}