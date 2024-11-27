#include<stdio.h>
int main()
{
    int n, flag=0, i;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int target;
    printf("Enter Searching Element: ");
    scanf("%d", &target);
    //logic of linear search
    for(i=0; i<n; i++)
    {
        if(arr[i]==target)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
       printf("Element found at %d position", i);
    else
       printf("Element Not Found");
    return 0;
}