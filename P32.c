#include<stdio.h>
#include<math.h>
int main()
{
    int num, count=0;
    printf("Enter Number: ");
    scanf("%d", &num);
    int temp = num;
    while(num != 0)
    {
        num = num/10;
        count++;
    }
    printf("Number of digits in %d is %d", temp, count);
    return 0;
}