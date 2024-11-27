#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, sum = 0;
    printf("Enter 5 digit number");
    scanf("%d", &n);
    sum = sum + n%10;
    n = n/10;
    sum = sum + n%10;
    n = n/10;
    sum = sum + n%10;
    n = n/10;
    sum += n%10;
    n = n/10;
    sum += n%10;
    n = n/10;
    printf("sum of digits = %d", sum);
    return 0;
}