#include<stdio.h>
int main()
{
    int r1, c1;
    printf("Enter row and column size of matrix: ");
    scanf("%d%d", &r1, &c1);
    int matrix[r1][c1];
    printf("Enter elements of matrix 1: \n");
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    int r2, c2;
    printf("Enter row and column size of matrix: ");
    scanf("%d%d", &r2, &c2);
    int matrix[r2][c2];
    printf("Enter elements of matrix 2: \n");
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    //logic of matrix multiplication
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            int sum=0;
            for(int k=0; k<c2; k++)
            {
                sum = sum + matrix1[i][k] * matrix2[k][j];
            }
            printf("%d", sum);
        }
        printf("\n");
    }
    return 0;
}