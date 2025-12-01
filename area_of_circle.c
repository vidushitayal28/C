#include<stdio.h>
int main()
{
    float r;
    float area,perimeter;

    printf("Enter radius of circle = \n");
    scanf("%f",&r);
    area = 3.14 * r * r;
    perimeter = 2 * 3.14 * r;
    printf("area and perimeter of the circle is %.2f,%.2f",area,perimeter);
    return 0;

}
