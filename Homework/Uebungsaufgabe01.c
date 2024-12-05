/*

Schreiben Sie ein C-Programm exchangeRateEUR2USDCalculator, das zuerst einen Wechselkurs und
dann einen Euro Betrag entgegennimmt. Dann soll BenutzerInnen der Wert in US Dollar auf eine
Nachkommastelle genau angezeigt werden.

*/

#include <stdio.h>

int main(void)
{

    double money = 0.0f;
    float exchangeRate = 0.0f;

    char name[50] = "";

    printf("Hello User! Please enter your name: ");
    scanf("%[^\n]s", name);

    printf("\nHello %s! Welcome to this simple exchange conververter program!\n", name);

    printf("Please enter the exchange rate from USD to EUR: ");
    scanf("%f", &exchangeRate);


    printf("\nEnter the amount of money you want to convert to USD: ");
    scanf("%lf", &money);

    printf("\nYour money in USD, with an exchange rate of %f is: %.1f USD\n\n", exchangeRate, money * exchangeRate);
       
    return 0;
}
