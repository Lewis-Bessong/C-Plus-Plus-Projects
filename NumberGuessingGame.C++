#include <iostream>
#include <string>

using namespace std;

int main (){

    // Brief description of what the game is.

    cout << "Welcome to my Number Guessing game!\n\n";

    cout << "This game consists of guessing a number\n";
    cout << "that the computer has provided and you\n";
    cout << "the user, have to try and get the number\n";
    cout << "with the help of the computers hints.\n\n";
    
    cout << "(For example, if your guess is less than the number by alot it will say 'Guess Higher!'and vise versa.\n"; 
    cout << "However, if its a close guess it will say 'Close, Guess Higher!' or 'Close, Guess Lower'.)\n\n";

    // Welcoming text into game and asking for name

   std:string users_first_name; // allows for there to be variable for strings 
    cout << "Before we start the game, whats your first name?: "; // where the user will put their name

    cin >> users_first_name; //computer puts user name into variable 
    cout << "Well then " << users_first_name << " have fun!"; // response after users input 

    return 0;
}



