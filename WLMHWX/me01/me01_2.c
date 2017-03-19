/*************************************************************
*  me01_1 - Volume and Surface Area of a Sphere
*  Programmed by Jaime Broñozo
*
*
**************************************************************/

#include <stdio.h>

int main(void)
{
	int radius, height;
	float PI = 3.1416;

	printf("Enter radius: ");
	scanf(" %d", &radius);
	printf("Enter height: ");
	scanf(" %d", &height);

	printf("The radius is %d. The height is %d\n", radius, height);
	printf("The volume of the cylinder is %f\n", PI*radius*radius*height);
	printf("The surface area of the sphere is %f\n", (2*PI*radius*height) + (2*PI*radius*radius));

	return 0;
}
