#include<stdio.h>
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d", &n);
    for(int i=n; i>=1; i--)
    {
        printf("%d ", i);
    }
    return 0;
} 