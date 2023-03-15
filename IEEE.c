#include <stdio.h>
int main()
{

    // Creating the variable number with the type integer
    int number;
    // printing a sentence to tell the user to input the number
    printf("Enter The number : ");

    // recieving the number using percentage (%d) because it is an integer value
    scanf("%d", &number);
    // switch with two cases it will give us 0 if the number is even and 1 if the num is odd
    switch (number % 2)
    {
    case 0:
        printf("%d The number is even", number);
        break;
    case 1:
        printf("%d The number is odd", number);
        break;

    default:
        printf("Enter valid number");
    }
    return 0;
}
