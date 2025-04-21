#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;
    char continued ;

    do {
        printf("\n--- Scientific Calculator --- \n");
        printf("\n ");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Power (x^y)\n");
        printf("6. Square root (√x)\n");
        printf("7. Logarithm (log base 10)\n");
        printf("8. Exponential (e^x)\n \n");
        printf("Choose an operation from (1-8) : ");
        scanf("%d", &choice);
        printf("\n ");
        switch(choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 != 0)
                    result = num1 / num2;
                else {
                    printf("Error: Division by zero\n");
                    break;
                }
                printf("Result: %.2lf\n", result);
                break;

            case 5:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &num1, &num2);
                result = pow(num1, num2);
                printf("Result: %.2lf\n", result);
                break;

            case 6:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if (num1 >= 0)
                    result = sqrt(num1);
                else {
                    printf("Error: Cannot take sqrt of negative number\n");
                    break;
                }
                printf("Result: %.2lf\n", result);
                break ;

            case 7:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if (num1 > 0)
                    result = log10(num1);
                else {
                    printf("Error: Log undefined for <= 0\n");
                    break;
                }
                printf("Result: %.2lf\n", result);
                break;

            case 8:
                printf("Enter exponent: ");
                scanf("%lf", &num1);
                result = exp(num1);
                printf("Result: %.2lf\n", result);
                break;

            default:
                printf("Invalid choice!\n");
        }

        printf("\nDo you want to perform another operation? (y/n): ");
        scanf(" %c", &continued);

    } 
    
    while (continued == 'y' || continued == 'Y');

    printf("Thanks for using the scientific calculator! \n");
    return 0;
}