#include <iostream>
#include <string>
#include <random>
#include <vector>

// This project will be my first self project with no plan/roadmap on how to do it, this will be all on me.
// This project will be about dad jokes that will generate when the user needs it.

int main () { 

    // ==== GAME DESCRIPTION ====

    std::cout << "Helloooo user!!!\n\n";

    std::cout << "Welcome to my Dad Joke Generator!\n";
    std::cout << "Even though the name may seem obvious, i'll still explain it, the dad joke generator\n";
    std::cout << "is a generator that you can use when you need a quick, random, and funny dad joke in\n";
    std::cout << "the heat of a momment.\n\n";
    
    std::cout << "This is how it works, the generator will ask you if you want a joke, say yes then it\n";
    std::cout << "will give you a joke, if no then the program will end. The generator will also ask if\n";
    std::cout << "you want another joke and depending on what you say then the same thing will repeat.\n\n";


    // ==== INPUT OF USERS NAME ====

    std::string users_name;

    std::cout << "Alright lets get started! But before that whats your name? (This will not be shared with others): ";
    std::cin >> users_name;

    std::cout << "\nOkay then " << users_name << " have fun!\n\n";


    // ==== GAME START ==== RANDOMIZATION LOGIC START ====

    std::vector<std::string> random_dad_jokes = {
        "Why don't eggs tell jokes? They'd crack up.", // 0 
        "Why did the scarecrow win an award? He was outstanding in his field.", // 1 
        "I tried to catch fog yesterday... Mist it.", // 2 
        "I used to hate facial hair, but then it grew on me.",
        "Im reading a book about anti-gravity. It's impossible to put down.", // 3 
        "I don't trust stairs.... they're always up to something.", // 4
        "I'm on a seafood diet, I see food and then I eat it.", // 5
        "Why don't skeletons fight each other? its because they don't have the guts too.", // 6 
        "Why did the bicycle fall over? It was two-tired.", // 7 
        "I have a joke about construction... wait im still working on it.", // 8
        "Why'd the computor go to the doctor? Because it caught a virus.", // 9
        "Listen to my pizza joke.... wait no its to cheesy." // 10
    };

    int randomindex = rand() % random_dad_jokes.size();
    

    // computer ask to play 

    std::string users_answer_to_play;
    std::cout << "Would you like to hear a joke? (Y/N): ";
    std::cin >> users_answer_to_play; 

    if (users_answer_to_play == "Y") {

        std::cout << "\n" << random_dad_jokes[randomindex] << "\n";
        std::cout << "Funny Right!";

    }

    else if (users_answer_to_play == "N") {

        std::cout << "Have a good time!";

    }

    else {

        std::cout << "Uh oh, you've most likely entered the wrong thing, please make sure your input is just 'Y' or 'N'\n";
        std::cout << "while making them capitialcase. Lets try again!\n\n";

        do {
            std::string users_answer_to_play;
            std::cout << "Would you like to hear a joke? (Y/N): ";
            std::cin >> users_answer_to_play; 

            if (users_answer_to_play == "Y") {

                std::cout << "\n" << random_dad_jokes[randomindex] << "\n";
                std::cout << "Funny Right!";
            }

            else if (users_answer_to_play == "N") {

                std::cout << "Have a good time!";

            }

            else {

                std::cout << "Uh oh, you've most likely entered the wrong thing, please make sure your input is just 'Y' or 'N'\n";
                std::cout << "while making them capitialcase. Lets try again!\n\n";

            }
        } while (users_answer_to_play != "Y" && users_answer_to_play != "N");
        
    } 

    std::string users_replay_choice;
    std::cout << "Do you want to hear another one :) ? (Y/N): ";
    std::cin >> users_replay_choice;


    /*
        Next to do is add a replay feature (with the do function) and add more jokes,
        later when done with that think of how to make the question available if user puts invalid input.

    */

    // MAKE SURE TO MAKE A PUSH COMMIT TO BRANCH AND MAIN  FOR THIS CODE BEFORE ADDING FROM HERE ON OUT 

    return 0;
}
