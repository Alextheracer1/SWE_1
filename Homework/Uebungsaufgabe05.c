/*

Schreiben Sie ein C-Programm numberGuessingGame, das BenutzerInnen Zahlen raten lässt. Man 
soll dabei 5 Versuche haben. Die zu erratende, zufällige Zahl soll zwischen 0 und 20 liegen. Nach 
einem falschen Versuch soll angezeigt werden, ob die gesuchte Zahl größer oder kleiner ist als die 
eingegebene. Ist die geratene Zahl richtig soll es keine weiteren Versuche mehr geben.


*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    //Initialisation, should only be called once
    srand(time(NULL));

    // Random Number between 0 and 99
    int randomNumber = rand() % 100;

    int guess = 0;
    int guessNumber = 0;
    int allowedGuesses = 10;


    while (guess < allowedGuesses) {

        printf("\nPlease enter your guess: ");
        scanf("%d", &guessNumber);

        if (guessNumber < randomNumber) {
            printf("The random number is bigger. Try again!\n");
        } else if (guessNumber > randomNumber) {
            printf("The random number is smaller. Try again!\n");
        }

        if (randomNumber == guessNumber) {
            printf("\nYou have won the game!");
            return 0;
        }
        guess++;
    }

    if (guess == allowedGuesses) {
        printf("\nGame over! The number was: %d", randomNumber);
    }


    return 0;
}
