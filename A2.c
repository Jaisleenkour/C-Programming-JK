#include<stdio.h>
int main()
{
    int marks[5];
    //logic to read elements of an array from the user.
    printf("Enter 5 elements: ");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &marks[i]);
    }
    //logic to display elements of an array.
    printf("Array elements are: ");
    for(int i=0; i<5; i++)
    {
        printf("%d", marks[i]);
    }
    return 0;
}