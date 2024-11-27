#include<stdio.h>
int main()
{
    system("cls");
    int n, sum=0;
    printf("Enter Number:");
    scanf("%d", &n);
    while(n != 0)
    {
        int rem = n%10;
        sum = sum + rem;
        n = n/10;
    }
    printf("Sum of digits = %d", sum);
    return 0;
}