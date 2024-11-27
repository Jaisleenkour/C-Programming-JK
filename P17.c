#include<stdio.h>
int main()
{
    int choice;
    printf("1. Area of circle\n");
    printf("2. Area of square\n");
    printf("3. Area of Rectangle\n");
    printf("Enter your choice:");
    scanf("%d", &choice);
    switch(choice)
    {
        //Declare the variables
        float r, l, b, a, area;
        case 1:
          //Here write code to find the area of circle
          printf("Enter r");
          scanf("%f", &r);
          area = 3.14 * r * r;
          printf("area of circle = %f\n", area);
          break;
        case 2:
          //Here write code to find the are of square
          printf("Enter a");
          scanf("%f", &a);
          area = a * a;
          printf("area of square = %f\n", area);
          break;
        case 3:
          //Here write code to find the area of rectangle
          printf("Enter l");
          scanf("%f", &l);
          printf("Enter b");
          scanf("%f", &b);
          area = l * b;
          printf("area of rectangle = %f\n", area);
          break;
        default:
          printf("Invalid Choice!!!");
    }
    return 0;
} 