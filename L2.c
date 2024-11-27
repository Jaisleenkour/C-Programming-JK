#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    float r, l, b, a, area, peri, circle, square, rectangle;
    printf("Enter r");
    scanf("%f", &r);
    area = 3.14 * r * r;
    printf("area of circle = %f\n", area);
    peri = 2 * 3.14 * r;
    printf("perimeter of circle = %f\n", peri);
    printf("Enter l");
    scanf("%f", &l);
    printf("Enter b");
    scanf("%f", &b);
    area = l * b;
    printf("area of rectangle = %f\n", area);
    peri = 2 * (l + b);
    printf("perimeter of rectangle = %f\n", peri);
    printf("Enter a");
    scanf("%f", &a);
    area = a * a;
    printf("area of square = %f\n", area);
    peri = 4 * a;
    printf("perimeter of square = %f\n", peri);
    return 0;
}