/*

Schreiben Sie ein C-Programm bankAccountDeposit, das einen Vor- und Nachnamen sowie einen
Einzahlungsbetrag einliest. BenutzerInnen soll eine Übersicht über den aktuellen Kontostand (erzeugt
als Zufallszahl) gegeben und der neue Kontostand angezeigt werden.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    //Initialisation, should only be called once
    srand(time(NULL));

    // Random Number between 0 and 100
    int randomNumber = rand() % 100;
    char name[40] = "";
    int input = 20;
    double tempMoney = 0;
    double bankMoney = randomNumber;

    printf("Welcome to the bank you can trust! Please enter your Name: ");
    scanf("%s", name);


    while (input != 0) {
        printf("\nWelcome %s! What do you want to do?\n", name);
        printf("1. Add Money | 2. Show Money | 0. Exit\n");
        scanf("%d", &input);

        if (input == 1) {
            printf("Please enter the Money you want to add to your account: ");
            scanf("%lf", &tempMoney);
            printf("\n");
            bankMoney += tempMoney;
            tempMoney = 0;
            printf("Money successfully added to the account\n");
        } else if (input == 2) {
            printf("Money currently in the bank: %.2lf\n", bankMoney);
        }
    }

    printf("\n\n\nThank you for trusting our services!");


    return 0;
}
