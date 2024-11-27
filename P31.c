#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("Enter Number:");
    scanf("%d", &num);
    int digits = (int)log10(num)+1;
    printf("Number of digits in %d is %d", num, digits);
    return 0;
}