#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int angle1, angle2, angle3;
    printf("Enter Angle 1 = ");
    scanf("%d", &angle1);
    printf("Enter Angle 2 = ");
    scanf("%d", &angle2);
    angle3 = 180 - angle1 - angle2;
    printf("Angle 3 = %d", angle3);
    return 0;
}