#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter number1: ");
    scanf("%d", &a);
    printf("Enter number2: ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping, number1 = %d\n", a);
    printf("After swapping, number2 = %d\n", b);
    return 0;
}