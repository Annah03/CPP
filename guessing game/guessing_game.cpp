#include <iostream>
#include <ctime>

int guess, num,i;
int tries = 3;


//create a guessing game that generates a random number, gives user a number of tries
int main(){
        char exit;
        srand(time(0));
        num = rand() % 10 + 1;
        i=0;
    for (i=0; i< tries; i++){
        std::cout << "Guess a number from (1-10): " << std::endl;
        std::cin >> guess;
        if (guess == num)
        {
            std::cout << "You win! Press C to play again, or E to exit" <<std::endl;
            std::cin >> exit;
            switch (exit){
                case 'c' : main();break;
                case 'C' : main();break;
            }
        }
        else if (guess != num && i == 2)
        {
            std::cout << "You lose! Press C to play again, or E to exit" <<std::endl;
            std::cin >> exit;
            switch (exit){
                case 'c' : main();break;
                case 'C' : main();break;
            }
        }
        else
        {
            std::cout << "Try again" << std::endl;
        }
        }
}
