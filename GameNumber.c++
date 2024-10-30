#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attemps = 0;

    cout <<"Welcome to the game 'Guess the Number'!\n";
    cout <<"The program has chosen a number between 1 and 100. Try to guess it!\n";

    do {
        cout <<"Enter your guess: ";
        cin >> guess;
        attemps++;

        if (guess < secretNumber) {
            cout << "Your number is lower than the chosen one. Try again.\n";
        } else if (guess > secretNumber) {
            cout << "Your number is higher than the chosen one. Try again.\n";
        } else {
            cout << "Congratulations! You guessed the number! " << secretNumber << " за " << attemps << " attempts.\n";
        }
    } while (guess != secretNumber);
    
    return 0;
}