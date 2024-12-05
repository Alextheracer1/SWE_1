/*

Schreiben Sie ein C-Programm exchangeRateEUR2USDCalculatorPlus, das ihr Programm aus 
Übungsaufgabe 1 so erweitert, dass zuerst nach einem EUR zu USD Kurs gefragt wird und dann ob 
von EUR zu USD oder USD zu EUR gerechnet werden soll.


*/

#include <stdio.h>

int main(void)
{

    double money = 0.0f;
    float exchangeRate = 0.0f;
    int choice = 0;

    char name[50] = "";

    printf("Hello User! Please enter your name: ");
    scanf("%[^\n]s", name);

    printf("\nHello %s! Welcome to this simple exchange converter program!\n", name);

    printf("Please enter the exchange rate from USD to EUR: ");
    scanf("%f", &exchangeRate);

    printf("\nWhat do you want to convert? 1. USD to EUR || 2. EUR to USD?");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\nEnter the amount of money you want to convert to USD: ");
        scanf("%lf", &money);

        printf("\nYour money in %.2lf USD, with an exchange rate of %.2f is: %.2f EUR\n\n", money, exchangeRate, money / exchangeRate);

    } else if (choice == 2) {
        printf("\nEnter the amount of money you want to convert to USD: ");
        scanf("%lf", &money);

        printf("\nYour money in %.2lf EUR, with an exchange rate of %.2f is: %.2f USD\n\n", money, exchangeRate, money * exchangeRate);

    } else {
        printf("\n\nError! Not a valid option!");
    }


    return 0;
}
