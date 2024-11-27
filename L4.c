#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    float n1, n2, n3, n4, n5, sum, percent;
    printf("Enter n1, n2, n3, n4, n5");
    scanf("%f%f%f%f%f", &n1, &n2, &n3, &n4, &n5);
    sum = n1 + n2 + n3 + n4 + n5;
    percent = sum/5;
    printf("Total = %f\npercent = %f", sum, percent);
    return 0;
}