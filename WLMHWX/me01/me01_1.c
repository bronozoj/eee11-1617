/*************************************************************
*  me01_1 - Volume and Surface Area of a Sphere
*  Programmed by Jaime Broñozo
*
*
**************************************************************/

#include <stdio.h>

int main(void)
{
	int radius;
	float PI = 3.1416;

	printf("Enter radius: ");
	scanf(" %d", &radius);

	printf("The radius is %d\n", radius);
	printf("The volume of the sphere is %f\n", 4.0/3*PI*radius*radius*radius);
	printf("The surface area of the sphere is %f\n", 4*PI*radius*radius);

	return 0;
}
