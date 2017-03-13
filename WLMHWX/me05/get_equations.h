#ifndef __GET_EQUATIONS_H__
#define __GET_EQUATIONS_H__
// used to avoid errors from duplicate includes

// place data here

const float PI = 3.1416;

float get_spherevolume(int radius)
{
	return (4.0/3.0) * PI * radius * radius * radius;
}

float get_spheresurfacearea(int radius)
{
	return 4.0 * PI * radius * radius;
}

float get_cylindervolume(int radius, int height)
{
	return PI * radius * radius * height;
}

float get_cylindersurfacearea(int radius, int height)
{
	return (2 * PI * radius * height) + (2 * PI * radius * radius);
}

// end the header file definition
#endif
