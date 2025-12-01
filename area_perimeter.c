#include <stdio.h>
void main() {
float length,breadth,area,perimeter;

printf("Enter the length of rectangle: \n");
scanf("%f",&length);

printf("Enter the breadth of rectangle: \n");
scanf("%f",&breadth);

area = length * breadth;
perimeter = 2 * (length + breadth);

printf("Area of the rectangle = %f\n",area);
printf("Perimeter of the rectangle =%f",perimeter);

}


