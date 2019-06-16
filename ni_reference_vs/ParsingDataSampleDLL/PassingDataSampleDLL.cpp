//==============================================================================
//
// Title:       PassingDataSampleDLL
// Purpose:     A short description of the library.
//
// Created on:  11/3/2009 at 10:16:30 AM by J J.
// Copyright:   NI. All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files
#include "stdafx.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
//#include "extcode.h"
//#include <ansi_c.h>
//#include <utility.h>
#include "PassingDataSampleDLL.h"

//==============================================================================
// Constants

//==============================================================================
// Types

//==============================================================================
// Static global variables

//==============================================================================
// Static functions

//==============================================================================
// Global variables

//==============================================================================
// Global functions
/*
/// HIFN  What does your function do?
/// HIPAR x/What inputs does your function expect?
/// HIRET What does your function return?
*/
void PrintFunctionDescription(char *functionName, char *functionDescription)
{
	std::cout<< "\n\nCalling Function: %s \nDescription: %s" << functionName << functionDescription << std::endl;
}

void ConcatenateStringsCharPointer_ReturnByReference (char* str1, char* str2, char* destination)
{
	//destination = malloc(sizeof(char) * (strlen(str1) + strlen(str2)) + 1);
	strcpy(destination, "");
	strcat(destination, str1);
	strcat(destination, str2);
}

/// HIFN  This function returns -1
/// HIRET Returns -1
int ReturningAValue_Integer (void)
{
	return -1;
}

/// HIFN  This function returns an integer pointer with value -1
/// HIRET Returns integer pointer with value -1
int* ReturningAValue_PointerToInteger (void)
{
	int *x = (int *) malloc(sizeof(int));
	*x = -1;
	return x;
}

/// HIFN  This function returns the sum of two numbers
/// HIPAR x/First Number
/// HIPAR y/Second Number
/// HIRET Returns sum of x and y
int PassingParameters_Integer (int x, int y)
{
	return x+y;
}

/// HIFN  This function returns the sum of two numbers by reference
/// HIPAR x/First Number
/// HIPAR y/Second Number
/// HIPAR sum/Sum of x and y
void ReturningValuesByReference_Integer (int x, int y, int *sum)
{
	*sum = x+y;
}

/// HIFN  This function returns the sum of the numbers in an integer array
/// HIPAR x/Integer array
/// HIPAR length/Length of array
/// HIRET Returns sum of integers in x
int PassingParamters_ArrayOfIntegers (int x[], int length)
{
	int i=0, sum=0;
	for (i=0; i<length; i++)
		sum+=x[i];
	return sum;
}

int* ReturningAValue_ArrayOfIntegers (int length)
{
	int i=0;
	int *newArray = (int *) malloc (length * sizeof(int));
	for (i=0; i<length; i++)
		newArray[i] = i;
	return newArray;
}

void ReturningValuesByReference_ArrayOfIntegers (int *x, int length, int **newArray, int *newLength)
{	
    int i;
    *newLength = length + 1;
    *newArray = (int *) realloc(*newArray, sizeof(int) * *newLength);
    for (i=0; i<length; i++)
        (*newArray)[i] = x[i];
    (*newArray)[i] = -1;
}

char* ReturningAValue_String (void)
{
	return const_cast<char *>("Hello World");
}

int PassingParamters_String (char *str)
{
	int length = 0;
	while (str[length] != '\0')
		length++;
	return length;

}

void ReturningValuesByReference_String (char *str, char **newString)
{
	*newString = (char *) malloc(sizeof(char) * (strlen(str) + 3));
	strcpy (*newString, str);
	strcat (*newString, "++");
}

int** ReturningAValue_2DArrayOfIntegers (int rows, int cols)
{
	int **x = (int **) malloc (sizeof(int) * rows);
	int i, j;
	for (i=0; i<rows; i++)
	{
		x[i] = (int *) malloc (sizeof(int) * cols);
		for (j=0; j<cols; j++)
			x[i][j] = i+j;
	}
	return x;
}

int PassingParamters_2DArrayOfIntegers (int *x, int rows, int cols)
{
	int i, j;
	int sum=0;
	for (i=0; i<rows; i++)
		for (j=0; j<cols; j++)
			sum += x[i * cols + j];
	return sum;
}

void ReturningValuesByReference_2DArrayOfIntegers (int rows, int cols, int ***newArray)
{
	int i, j;
	*newArray = (int **) malloc (sizeof(int) * rows);
	for (i=0; i<rows; i++)
	{
		(*newArray)[i] = (int *) malloc (sizeof(int) * cols);
		for (j=0; j<cols; j++)
			(*newArray)[i][j] = i+j;
	}
}

struct simpleStructCircle ReturningAValue_SimpleStruct(void)
{
	struct simpleStructCircle circle = {1, 1, 3};
	return circle;
}

struct simpleStructCircle* ReturningAValue_PointerToSimpleStruct(void)
{
	struct simpleStructCircle tempCircle = {1, 1, 3};
	struct simpleStructCircle *circle = &tempCircle;
	return circle;
}

float PassingParamters_SimpleStruct (struct simpleStructCircle circle)
{
	return (float)3.14*circle.radius*circle.radius;
}

void ReturningValuesByReference_SimpleStruct (struct simpleStructCircle circle, struct simpleStructCircle *largerCircle)
{
	*largerCircle = circle;
	(*largerCircle).radius*= 2;
}

void ReturningValuesByReference_ArrayOfSimpleStruct (struct simpleStructCircle **circleArray, int length)
{
	int i;
	*circleArray = (struct simpleStructCircle*) malloc(sizeof(struct simpleStructCircle) * length);
	for (i=0; i<length; i++)
	{
		(*circleArray)[i].x = (float)i;
		(*circleArray)[i].y = (float)i;
		(*circleArray)[i].radius = (float)i;
	}
}

struct complexStructPolygon ReturningAValue_ComplexStruct (void)
{
	int i;
	struct complexStructPolygon triangle;

	triangle.name = const_cast<char *>("Triangle");
	triangle.numVertices = 3;
	triangle.vertices = (struct point *) malloc (sizeof (struct point) * triangle.numVertices);
	for (i=0; i<triangle.numVertices; i++)
	{
		triangle.vertices[i].x = i;
		triangle.vertices[i].y = i;
	}
	
	return triangle;
}

struct complexStructPolygon* ReturningAValue_PointerToComplexStruct (void)
{
	struct complexStructPolygon *pTriangle = (struct complexStructPolygon *) malloc (sizeof(struct complexStructPolygon));
	*pTriangle = ReturningAValue_ComplexStruct();
	return pTriangle;
}

int PassingParamters_ComplexStruct (struct complexStructPolygon triangle)
{
	int i;
	int max = triangle.vertices[0].y;
	for (i=1; i<triangle.numVertices; i++)
	{
		if (triangle.vertices[i].y > max)
			max = triangle.vertices[i].y;
	}
	return max;
}

void ReturningValuesByReference_PointerToComplexStruct (struct complexStructPolygon* triangle)
{
	*triangle = ReturningAValue_ComplexStruct();
}

void ReturningValuesByReference_ArrayOfComplexStruct (struct complexStructPolygon **triangles, int length)
{
	int i;
	*triangles = (struct complexStructPolygon *) malloc(sizeof(struct complexStructPolygon) * length);
	for (i=0; i<length; i++)
	{
		(*triangles)[i] = ReturningAValue_ComplexStruct();
	}
}