#include<stdio.h>
#include<math.h>
int main()
{
    int num, count=0;
    printf("Enter Number: ");
    scanf("%d", &num);
    int lastdigit = num%10;
    num = num/10;
    count = (int)log10(num);
    int firstdigit = num/pow(10, count);
    int rem = num%(int)pow(10, count);
    num = lastdigit*pow(10, count+1) + rem*10 + firstdigit;
    printf("After swapping number is = %d", num);
    return 0;
}