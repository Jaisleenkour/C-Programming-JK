#include<stdio.h>
int main()
{
    int dayno;
    printf("Enter Day Number:");
    scanf("%d", &dayno);
    switch(dayno)
    {
        case 1:
          printf("Monday");
          break;
        case 2:
          printf("Tuesday");
          break;
        case 3:
          printf("wednesday");
          break;
        case 4:
          printf("Thursday");
          break;
        case 5:
          printf("Friday");
          break;
        case 6:
          printf("Saturday");
          break;
        case 7:
          printf("Sunday");
          break;
        default:
          printf("Invalid day number");
    }
    return 0;
}