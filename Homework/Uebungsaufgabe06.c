/*

Schreiben Sie ein C-Programm productionTimeMeanValue, das BenutzerInnen nach maximal 10
Produktionszeiten einer Maschine fragt. Sobald 0 eingegeben wird, wird die Eingabe gestoppt.
Danach soll der Mittelwert der Produktionszeiten ausgegeben werden.


*/

#include <stdio.h>

int main(void)
{

    int input = 10;
    double meanTime = 0.0f;
    int count = 0;

    printf("Welcome to the production mean time calculator!\n");
    printf("You can end the program at any time by entering '0'\n");
    
    for (count = 0; count < 10; count++) {
        printf("\nPlease enter the production time: ");
        scanf("%d", &input);
        if (input == 0)
        {
            break;
        }
        
        meanTime += input;
    }

    printf("The production mean time is: %.3f", meanTime / count);
    
    return 0;
}
