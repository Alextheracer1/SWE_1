/*

Erstellen Sie ein C-Programm mystrcat, das zwei Zeichenketten einliest und den
zweiten String an den ersten hinzufügt. Das Ergebnis soll dann ausgegeben werden. Es sollen keine
string.h Funktionen verwendet werden.


*/

#include <stdio.h>

int main(void)
{

    int string1[80] = {};
    int string2[40] = {};
    int temp = 0;
    int length = 0;
    int length2 = 0;

    printf("Enter the first String: ");

    while (temp != '\n') {
        temp = getchar();
        string1[length] = temp;
        length++;
    }

    temp = 0;
    printf("\nEnter the second String: ");

    while (temp != '\n') {
        temp = getchar();
        string2[length2] = temp;
        length2++;
    }

    int j = 0;
    for (int i = length-1; i < length+length2; i++) {

        string1[i] = string2[j];
        j++;

    }

    printf("\n\nBoth Strings: ");
    for (int i = 0; i < length+length2; i++) {
        printf("%c", string1[i]);
    }

    return 0;
}
