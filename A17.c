#include<stdio.h>
int main()
{
    int rowSize, colSize;
    printf("Enter the row and column size of 2D array: ");
    scanf("%d%d", &rowSize, &colSize);
    int arr[rowSize][colSize];
    printf("Enter 2D Array Elements: ");
    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<colSize; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Elements of 2D array are: \n");
    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<colSize; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}