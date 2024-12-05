/*

Schreiben Sie ein C-Programm nameTable, das die Eingabe von drei Vor- und
Nachnamen verlangt. Dann soll BenutzerInnen eine Tabellarische Ansicht der Namen, beginnend mit
dem Nachnamen, angezeigt werden. Verwenden Sie zur Ausgabe nur eine printf().

*/

#include <stdio.h>

int main()
{

    int inputLength = 3;
    int tempCounter = 0;

    // First value is 2* the inputLength
    char names[6][40] = {{"Test"}};

    for (int i = 0; i < inputLength; i++)
    {
        printf("\nEnter your first name:");
        scanf("%s", names[tempCounter]);

        printf("\nEnter your last name:");
        scanf("%s", names[tempCounter+1]);
        
        tempCounter+=2;
    }

    tempCounter = 0;

    for (int j = 0; j < inputLength; j++) {
        printf("%s, %s\n", names[tempCounter+1], names[tempCounter]);
        
        tempCounter+=2;
    }

    return 0;
}