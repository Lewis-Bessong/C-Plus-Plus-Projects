#include <iostream>
#include <string>
#include <random>

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


    /* 
    
    This is where I will continue later , but try to find out how to generate a customized random group of strings 
        and implement a 'do' function for when/if the user puts the wrong input.

    */



    return 0;
}
