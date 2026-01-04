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

    // start the game

    cout << "Lets begin the game!\n"; 
    cout << "I now have a number in my head thats from 1 - 100, try to guess it!\n\n";

    //generate random number

     unsigned seed = std::chrono::system_clock::now().time_since_epoch().count(); // gets a unique number based on the systems clock

    mt19937 gen(seed); // the actual generator that makes random data (aka the mersenne twister)

    uniform_int_distribution<> distrib(1, 100); // Distribution of random numbers in wide range 

    int random_num = distrib(gen); 
  
    //ask for users answer

    int users_guess;
    cout << "Enter your guess here: ";
    cin >> users_guess;
    
    //set conditional statements according to the users input

    // repeat process 
    return 0;
}




