#include <stdio.h>


void calculateSum(double x, double y) {
    if (x == (int)x && y == (int)y) {

        int result = (int)x + (int)y;
        printf("\nThe sum of %d and %d is: %d\n", (int)x, (int)y, result);

    } else {

        double result = x + y;
        printf("\nThe sum of %.2lf and %.2lf is: %.2lf\n", x, y, result);

    }
}

void calculateSubtraction(double x, double y) {
    if (x == (int)x && y == (int)y) {
        int result = (int)x - (int)y;
        printf("\nThe difference between %d and %d is: %d\n", (int)x, (int)y, result);
    } else {

        double result = x - y;
        printf("\nThe difference between %.2lf and %.2lf is: %.2lf\n", x, y, result);
    }
}

void calculateDivision(double x, double y) {
    if (y == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        double result = x / y;
        if (x == (int)x && y == (int)y) {
            printf("\nThe division of %d and %d is: %d\n", (int)x, (int)y, (int)result);
        } else {
            printf("\nThe division of %.2lf and %.2lf is: %.2lf\n", x, y, result);
        }
    }
}

void calculateMultiplication(double x, double y) {
    if (x == (int)x && y == (int)y) {

        int result = (int)x * (int)y;
        printf("\The product of %d and %d is: %d\n", (int)x, (int)y, result);

    } else {
        double result = x * y;
        printf("\The product of %.2lf and %.2lf is: %.2lf\n", x, y, result);
    }
}

int main(){

    int option;
    double x, y;

    do
    {
        printf("Menu:\n\n");
        printf("1 - Add\n");
        printf("2 - Subtraction\n");
        printf("3 - Division\n");
        printf("4 - Multiply\n");
        printf("5 - exit\n\n");


        printf("Chose an operation: ");
        scanf("%d", &option);

        if (option >= 1 && option <= 4)
        {

            printf("\nEnter the value of x: ");
            scanf("%lf", &x);

            printf("Enter the value of y: ");
            scanf("%lf", &y);

        }
        

        switch (option)
        {
        case 1:
            calculateSum(x, y);
            break;
        case 2:
            calculateSubtraction(x, y);
            break;
        case 3:
            calculateDivision(x, y);
            break;
        case 4:
            calculateMultiplication(x, y);
            break;
        case 5:
            printf("Exiting the program...\n");
            break;
        
        default:
        printf("Invalid operation, try again with the numbers above!\n");
            break;
        }
        if (option != 5) {
            printf("\nPress Enter to continue...");
            while (getchar() != '\n'); // Limpa o buffer de entrada
            getchar(); // Espera o usuário pressionar Enter
        }
        

    } while (option != 5);
    

    return 0;
}