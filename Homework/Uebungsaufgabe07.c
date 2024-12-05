/*

Schreiben Sie ein C-Programm basicCalculator, das einen Grundrechenoperator und zwei Zahlen
entgegennimmt, die Rechnung durchführt und das Ergebnis ausgibt.


*/

#include <stdio.h>

int main(void)
{

    float num1 = 0, num2 = 0, sum = 0;
    char selection = ' ';

    printf("Enter Numbers and operator (Num1 Operator Num2): ");
    scanf("%f %c %f", &num1, &selection, &num2);

    switch (selection) {
        case '+':
            sum = num1 + num2;
            printf("\nAddition Sum: %f", sum);
            break;
        case '-':
            sum = num1 - num2;
            printf("\nSubtraction Sum: %f", sum);
            break;
        case '*':
            sum = num1 * num2;
            printf("\nMultiplication Sum: %f", sum);
            break;
        case '/':
            sum = num1 / num2;
            printf("\nDivide Sum: %f", sum);   
            break;
        default:
            printf("\nWrong operation entered!");
    }
    
    return 0;
}
