/*************************************************************
*  me05_2.c - Volume and Surface Area of Sphere and Cylinder
*  programmed by Jaime Broñozo
*
*
**************************************************************/

// library provided by compiler
#include <stdio.h>

// (relative) path to custom header library
#include "get_equations.h"

int main(void)
{
	int cyrad, cyh, sprad;

	// prompt for user input and error checking
	printf("Input Sphere radius: ");
	scanf(" %d", &sprad);
	if(sprad <= 0){
		printf("Invalid input\n");
		return 0;
	}
	printf("Input Cylinder radius: ");
	scanf(" %d", &cyrad);
	if(cyrad <= 0){
		printf("Invalid input\n");
		return 0;
	}
	printf("Input Cylinder height: ");
	scanf(" %d", &cyh);
	if(cyh <= 0){
		printf("Invalid input\n");
		return 0;
	}

	printf("Sphere: r=%d\n", sprad);
	printf("Volume = %f - Surface Area = %f\n", get_spherevolume(sprad), get_spheresurfacearea(sprad));
	printf("Cylinder: r=%d h=%d\n", cyrad, cyh);
	printf("Volume = %f - Surface Area = %f\n", get_cylindervolume(cyrad, cyh), get_cylindersurfacearea(cyrad, cyh));

	return 0;
}
