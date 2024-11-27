#include<stdio.h>
#include<stdlib.h>
int main()
{
    float length, breadth, area;
    printf("Enter length");
    scanf("%f", &length);
    printf("Enter Breadth");
    scanf("%f", &breadth);
    area = length * breadth;
    printf("Area of Recatngle = %f", area);
    return 0;
}