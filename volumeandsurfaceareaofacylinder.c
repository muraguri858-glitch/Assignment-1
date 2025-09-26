/*
name:maina samuel muraguri
reg no:CT100/G/26191/25
Description:find the volume and surface area of a cylinder

*/

#include <stdio.h>
#define PI 3.14159265359

int main() {
    double radius, height, volume, surface_area;

    // Prompt user for input
    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    // Calculate volume and surface area
    volume = PI * radius * radius * height;
    surface_area = 2 * PI * radius * (radius + height);

    // Display results
    printf("Volume of the cylinder: %.2lf\n", volume);
    printf("Surface area of the cylinder: %.2lf\n", surface_area);

    return 0;
}
