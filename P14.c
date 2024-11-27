#include<stdio.h>
int main()
{
    int num, cube;
    printf("Enter Number:");
    scanf("%d", &num);
    if(num>0)
    {
        cube = num * num * num;
        printf("Cube of num is %d", cube);
    }
    return 0;
}