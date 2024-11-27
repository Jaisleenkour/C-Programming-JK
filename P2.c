#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;
    float y;
    double z;
    char ch;
    printf("Enter integer value");
    scanf("%d", &x);
    printf("Enter float value");
    scanf("%f", &y);
    printf("Enter double value");
    scanf("%lf", &z);
    printf("Enter character value");
    scanf("%c", &ch);
    printf("x = %d \n", x);
    printf("y = %f \n", y);
    printf("z = %lf \n", z);
    printf("ch = %c \n", ch);
    return 0;
}