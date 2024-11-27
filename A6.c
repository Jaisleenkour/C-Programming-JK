#include<stdio.h>
int main()
{
    int n, sum=0
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    //logic to read elements of an array from the user.
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr1[n]);
    }
    //logic to copy data from one array to another
    for(int i=0; i<n; i++)
    {
        arr2[i]=arr1[i];
    }
    printf("Elements of array-1 are: \n");
    for(int i=0; i<n; i++)
    
}