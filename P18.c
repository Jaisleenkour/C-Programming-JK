#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    if(a>b)
       printf("a is larger than b");
    else
       printf("b is larger than a");
    return 0;
}