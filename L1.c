#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int num1, num2, sum, subtraction, multi, remainder;
    printf("Enter num1");
    scanf("%d", &num1);
    printf("Enter num2");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("sum = %d\n", sum);
    subtraction = num1 - num2;
    printf("subtraction = %d\n", subtraction);
    multi = num1 * num2;
    printf("multi = %d\n", multi);
    remainder = num1 % num2;
    printf("remainder = %d\n", remainder);
    return 0;
}