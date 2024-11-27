#include<stdio.h>
int main()
{
    int marks[5] = {453, 398, 432, 278, 312};
    printf("Array elements are:");
    for(int i=0; i<5; i++)
    {
        printf("%d", marks[i]);
    }
    return 0;
}