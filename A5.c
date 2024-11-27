#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    //logic to read elements of an array from the user.
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("Sum of array elements are: %d", sum);
    return 0;
}