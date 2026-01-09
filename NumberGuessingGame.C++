#include <iostream>
#include <string> // tools for having text 
#include <random> // tools for generating random things
#include <chrono> // for specifically making sure something newly random is generated

using namespace std;

int main (){

    // Brief description of what the game is.

    std::cout << "Welcome to my Number Guessing game!\n\n";

    std::cout << "This game consists of guessing a number\n";
    std::cout << "that the computer has provided and you\n";
    std::cout << "the user, have to try and get the number\n";
    std::cout << "with the help of the computers hints.\n\n";
    
    std::cout << "(For example, if your guess is less than the number by alot it will say 'Guess Higher!'and vise versa.\n"; 
    std::cout << "However, if its a close guess it will say 'Close, Guess Higher!' or 'Close, Guess Lower'.)\n\n";

    // Welcoming text into game and asking for name

   std:string users_first_name; // allows for there to be variable for strings 
    cout << "Before we start the game, whats your first name?: "; // where the user will put their name

    std::cin >> users_first_name; //computer puts user name into variable 
    std::cout << "Well then " << users_first_name << " have fun!"; // response after users input 

    // start the game

    std::cout << "Lets begin the game!\n"; 
    std::cout << "I now have a number in my head thats from 1 - 100, try to guess it!\n\n";

    //generate random number

     unsigned seed = std::chrono::system_clock::now().time_since_epoch().count(); // gets a unique number based on the systems clock

    mt19937 gen(seed); // the actual generator that makes random data (aka the mersenne twister)

    uniform_int_distribution<> distrib(1, 100); // Distribution of random numbers in wide range 

    int random_num = distrib(gen); 
  
    //ask for users answer

    int users_guess;
    std::cout << "Enter your guess here: ";
    std::cin >> users_guess;
    

    while (users_guess != random_num) { // will keep running these conditionals only if user doesnt guess right

        if (users_guess < random_num) { // If guess is low 
            std::cout << "Guess Higher!\n\n";
        }

        else if (users_guess > random_num) { // if guess is high 
            std::cout << "Guess Lower!\n\n"; 
        }

        std::cout << "Enter your guess here: "; // ask the user for another guess 
        std::cin >> users_guess;
    }

    if (users_guess == random_num) {
        std::cout << "Congrats! You've Guessed The Right Number!\n\n";
    }

    // ask if user wants to play again

    string users_replay_choice;
    std::cout << "Would you like to play again " << users_first_name << "? ( Y / N ): ";
    std::cin >> users_replay_choice;

    //if user says yes repeat whole program with a new generated number 
    //if user says no then goodbye statement then shut down 
    //handle lowercase user option, replay should run outside first guessing loop.

    return 0;
}








