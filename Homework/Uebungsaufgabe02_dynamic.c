/*

Schreiben Sie ein C-Programm nameTable, das die Eingabe von drei Vor- und
Nachnamen verlangt. Dann soll BenutzerInnen eine Tabellarische Ansicht der Namen, beginnend mit
dem Nachnamen, angezeigt werden. Verwenden Sie zur Ausgabe nur eine printf().

*/

#include <stdio.h>

int main()
{
    int inputLength = 0;
    int h = 0;


    printf("Please choose how many names you want to enter:");
    scanf("%d", &inputLength);

    if (inputLength <= 2) {
        printf("\n\nError! Size cannot be smaller than 2!");
        return 1;
    }

    char names[inputLength*2][40];

    for (int i = 0; i < inputLength; i++)
    {
        printf("\nEnter your first name:");
        scanf("%s", names[h]);

        printf("\nEnter your last name:");
        scanf("%s", names[h+1]);
        h+=2;
    }


    h = 0;

    for (int j = 0; j < inputLength; j++) {
        printf("%-40s \t %s \n", names[h+1], names[h]);
        h+=2;
    }

    return 0;
}