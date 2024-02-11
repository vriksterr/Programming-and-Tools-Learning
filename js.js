// Prompt the user to enter their name
var userName = prompt("Please enter your name:");

// Check if the user entered a name
if (userName !== null && userName !== "") {
    // Display a greeting message with the user's name
    alert("Hello, " + userName + "! Welcome to our website.");
} else {
    // Display a generic greeting message if the user didn't enter a name
    alert("Hello there! Welcome to our website.");
}

