// Labview_to_DLL.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Labview_to_DLL.h"



int ComplexMultiply(cmplx64* input, double* output)
{
	*output = (*input).re * (*input).im;
	//*output = 10.0;
	return true;
}

int GetSphereSAandVol(double radius, double* sa, double* vol)
//Calculate the surface area and volume of a sphere with given radius
{
	if (radius < 0)
		return false; //return false (0) if radius is negative
	*sa = GetSA(radius);
	*vol = GetVol(radius);
	return true;
}

double GetSA(double radius)
{
	return 4 * M_PI * radius * radius;
}

double GetVol(double radius)
{
	return 4.0 / 3.0 * M_PI * pow(radius, 3.0);
}