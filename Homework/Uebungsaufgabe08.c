/*

Erstellen Sie ein C-Programm mystrcmp, das zwei Zeichenketten einliest, überprüft, ob die beiden
Strings gleich sind und das Ergebnis ausgibt. Verwenden Sie zum Einlesen der Strings die Funktion
getchar(). Es sollen keine string.h Funktionen verwendet werden.


*/

#include <stdio.h>

int main(void)
{

    int first[40] = {};
    int second[40] = {};
    int length = 0;
    int length2 = 0;
    int temp = 0;

    printf("Enter the first string (Max 40 char): ");


    while (temp != '\n') {
        temp = getchar();
        first[length] = temp;
        length++;
    }

    printf("\nEnter the second string (Max 40 char): ");

    temp = 0;
    while (temp != '\n') {
        temp = getchar();
        second[length2] = temp;
        length2++;
    }


    if (length != length2) {
        printf("\nStrings do NOT match!");
        return 1;
    }


    for (int i = 0; i < length; i++) {
        if (first[i] != second[i]) {
            printf("\nStrings do NOT match!!");
            return 1;
        }
    }

    printf("\nStrings match!");

    
    return 0;
}
