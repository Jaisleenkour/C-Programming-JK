#include<stdio.h>
int main()
{
    int sum = 0, num;
    do
    {
        printf("Enter Number:");
        scanf("%d", &num);
        sum += num;
    }
    while(num != 0);
    printf("sum = %d", sum);
    return 0;
}