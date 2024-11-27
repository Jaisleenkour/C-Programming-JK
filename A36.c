#include<stdio.h>
#include<string.h>
int main()
{
    char str[30], temp[30];
    printf("Enter String: ");
    gets(str);
    strcpy(temp, str);
    strrev(str);
    if(strcmp(temp, str)==0)
       printf("String is Pallindrome");
    else
       printf("Not Pallindrome");
    return 0;
}