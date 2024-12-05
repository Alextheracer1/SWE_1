/*

Erstellen Sie ein C-Programm mystrcpy, das eine Zeichenkette einliest, den Inhalt in einen anderen
Stirng kopiert und beide Strings dann ausgibt. Es sollen keine string.h Funktionen verwendet werden.


*/

#include <stdio.h>

int main(void)
{

    int string1[40] = {};
    int string2[40] = {};
    int temp = 0;
    int length = 0;

    printf("Enter a String: ");

    while (temp != '\n') {
        temp = getchar();
        string1[length] = temp;
        length++;
    }

    printf("\nString 1: ");
    for (int i = 0; i < length; i++) {
        printf("%c", string1[i]);
    }

    printf("\nCopying contents to second string . . . .");

    for (int i = 0; i < length; i++) {
        string2[i] = string1[i];
    }

    printf("\n\nString 2: ");
    for (int i = 0; i < length; i++) {
        printf("%c", string2[i]);
    }


    return 0;
}
