#pragma once

#include "math.h"    //library that defines the pow function

#define M_PI 3.14159 //declare our M_PI constant


//Function declarations
extern "C" __declspec(dllexport) int GetSphereSAandVol(double radius, double* sa, double* vol);
double GetSA(double radius);
double GetVol(double radius);
