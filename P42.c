#include<stdio.h>
int main()
{
    int i=2, num, flag=0;
    printf("Enter Number: ");
    scanf("%d", &num);
    while(i<=num/2)
    {
        if(num%i == 0)
        {
            flag = 1;
            break;
        }
        i++;
    }
    if(flag == 0)
       printf("Number is prime");
    else
       printf("Number is not prime");
    return 0;
}