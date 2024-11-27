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
    num = temp;
    int lastdigit = num%10;
    int firstdigit = num/pow(10, count-1);
    int sum = lastdigit + firstdigit;
    printf("Sum of first and last digit = %d", sum);
    return 0;
}