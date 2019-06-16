//==============================================================================
//
// Title:       PassingDataSampleDLL
// Purpose:     A short description of the interface.
//
// Created on:  11/3/2009 at 10:16:30 AM by J J.
// Copyright:   NI. All Rights Reserved.
//
//==============================================================================

#ifndef __PassingDataSampleDLL_H__
#define __PassingDataSampleDLL_H__

#ifdef __cplusplus
    extern "C" {
#endif

//==============================================================================
// Include files

//#include "cvidef.h"

//==============================================================================
// Constants

//==============================================================================
// Types

struct simpleStructCircle
{
	float x;
	float y;
	float radius;
};		
struct point
{
	int x;
	int y;
};

struct complexStructPolygon
{
	char *name;
	int numVertices;
	struct point *vertices;
};

//==============================================================================
// External variables

//==============================================================================
// Global functions

__declspec(dllexport) void PrintFunctionDescription(char *functionName, char *functionDescription);

//This function returns -1
__declspec(dllexport) int ReturningAValue_Integer (void);

//This function returns an integer pointer with value -1
__declspec(dllexport) int* ReturningAValue_PointerToInteger (void);

//This function returns the sum of two numbers
__declspec(dllexport) int PassingParameters_Integer (int x, int y);

//This function returns the sum of two numbers by reference
__declspec(dllexport) void ReturningValuesByReference_Integer (int x, int y, int *sum);

//This function returns the sum of the numbers in an integer array
__declspec(dllexport) int PassingParamters_ArrayOfIntegers (int x[], int length);

//This function returns an array of integers of length specified by the length paramter. Values are 0...length-1.
__declspec(dllexport) int* ReturningAValue_ArrayOfIntegers (int length);

//This function takes an array and returns ny reference a duplicate new array with an extra integer (-1) at the end
__declspec(dllexport) void ReturningValuesByReference_ArrayOfIntegers (int *x, int length, int **newArray, int *newLength);

//This function returns the string \"Hello World\"
__declspec(dllexport) char* ReturningAValue_String (void);

//This function takes a string and returns its length
__declspec(dllexport) int PassingParamters_String (char *str);

//This function takes a string and returns by reference a duplicate string with \"++\" appended
__declspec(dllexport) void ReturningValuesByReference_String (char *str, char **newString);

//This function returns a 2D array of integers with element values equal to row+col
__declspec(dllexport) int** ReturningAValue_2DArrayOfIntegers (int rows, int cols);

//This function takes a 2D array of integers and returns the sum of its elements
__declspec(dllexport) int PassingParamters_2DArrayOfIntegers (int *x, int rows, int cols);

//This function returns by reference a 2D array of integers with element values equal to row+col
__declspec(dllexport) void ReturningValuesByReference_2DArrayOfIntegers (int rows, int cols, int ***newArray);

//This function returns a simple structure (circle)
__declspec(dllexport) struct simpleStructCircle ReturningAValue_SimpleStruct(void);

//This function returns a pointer to a simple structure (circle)
__declspec(dllexport) struct simpleStructCircle* ReturningAValue_PointerToSimpleStruct(void);

//This function takes a simple structure (circle) and returns its area
__declspec(dllexport) float PassingParamters_SimpleStruct (struct simpleStructCircle circle);

//This function takes a simple structure (circle) and returns a duplicate simple struct (circle) by reference with double the radius
__declspec(dllexport) void ReturningValuesByReference_SimpleStruct (struct simpleStructCircle circle, struct simpleStructCircle *largerCircle);

//This function returns by reference an array of simple struct (circle), where each circle has x, y and radius = i
__declspec(dllexport) void ReturningValuesByReference_ArrayOfSimpleStruct (struct simpleStructCircle **circleArray, int length);

//This function returns a complex structure (polygon)
__declspec(dllexport) struct complexStructPolygon ReturningAValue_ComplexStruct (void);

//This function returns a pointer to a complex structure (polygon)
__declspec(dllexport) struct complexStructPolygon* ReturningAValue_PointerToComplexStruct (void);

//This function takes a complex struct (polygon) and returns the maximum y value
__declspec(dllexport) int PassingParamters_ComplexStruct (struct complexStructPolygon triangle);

//This function returns a complex structure (polygon) by reference
__declspec(dllexport) void ReturningValuesByReference_PointerToComplexStruct (struct complexStructPolygon* triangle);

//This function returns by reference an array of complex struct (polygon)
__declspec(dllexport) void ReturningValuesByReference_ArrayOfComplexStruct (struct complexStructPolygon **triangles, int length);

#ifdef __cplusplus
    }
#endif

#endif  /* ndef __PassingDataSampleDLL_H__ */
