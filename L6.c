#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int years, months, days;
    printf("Enter days = ");
    scanf("%d", &days);
    years = days / 365;
    printf("Years = %d\n", years);
    days = days % 365;
    months = days / 30;
    printf("Months = %d\n", months);
    days = days % 30;
    printf("Days = %d", days);
    return 0;
}