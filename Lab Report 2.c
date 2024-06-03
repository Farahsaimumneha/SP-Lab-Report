#include<stdio.h>
#define PI 3.1416

int main(){

int choice;
float radius,length,width,base,height,area;

printf("Choose a shape to calculate the area:\n");

printf("1. Circle\n");
printf("2. Rectangle\n");
printf("3. Triangle\n");
scanf("%d", &choice);

switch(choice){

case 1:
    printf("Enter the radius of the circle:");
    scanf("%f",&radius);

    area=PI*radius*radius;

    printf("Area of the circle:%.2f\n",area);
    break;

case 2:
    printf("Enter the length of the rectangle:");
    scanf("%f",&length);

    printf("Enter the width of the rectangle:");
    scanf("%f",&width);

    area=length*width;

    printf("Area of the rectangle:%.2f\n",area);
    break;

case 3:
    printf("Enter the base of the triangle:");
    scanf("%f",&base);

    printf("Enter the height of the triangle:");
    scanf("%f",&height);

    area=0.5*base*height;
    printf("Area of the triangle:%.2f\n",area);
    break;

default:
    printf("Invalid choice.\n");

}

return 0;

}
