#include<stdio.h>
int main()
{
    system("cls");
    int n, reverse=0, rem;
    printf("Enter a Number: ");
    scanf("%d", &n);
    while(n!=0)
    {
        rem = n%10;
        reverse = reverse * 10 + rem;
        n/=10;
    }
    printf("Reversed Number = %d", reverse);
    return 0;
}