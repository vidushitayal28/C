#include <stdio.h>

int main() {
    int choice;
    float side, length, breadth, height, radius;
    float volume;

    printf("Select a shape to find its volume:\n");
    printf("1. Cube\n");
    printf("2. Cuboid\n");
    printf("3. Sphere\n");
    printf("4. Cylinder\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch(choice) {
    case 1:
     printf("Enter side length of Cube: ");
     scanf("%f", &side);
     volume = side * side * side;
     printf("Volume of Cube = %.2f\n", volume);
     break;

    case 2:
    printf("Enter length, breadth & height of Cuboid: ");
    scanf("%f %f %f", &length, &breadth, &height);
    volume = length * breadth * height;
    printf("Volume of Cuboid = %.2f\n", volume);
    break;

    case 3:
    printf("Enter radius of Sphere: ");
    scanf("%f", &radius);
    volume = (4.0/3.0) * 3.14159 * radius * radius * radius;
    printf("Volume of Sphere = %.2f\n", volume);
    break;

    case 4:
    printf("Enter radius & height of Cylinder: ");
    scanf("%f %f", &radius, &height);
    volume = 3.14159 * radius * radius * height;
    printf("Volume of Cylinder = %.2f\n", volume);
    break;

        default:
        printf("Invalid choice!");
    }

    return 0;
}
