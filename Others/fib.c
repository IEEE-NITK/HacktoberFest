//******************************************************************************
//	File:			fib.c
//
//	Description:	Fibonacci function
//
//	Revision data:	19/03/2015
//	Author:			Vitaly Leshchenko
//	Review:			-/-
//******************************************************************************

#include "forfib.h"

int fib(int* A, int N)
{
	int first;
	int second;
	int i;
	A[0] = 0;
	first = A[0];
	A[1] = 1;
	second = A[1];
	for (i = 2; i < N; i++)
	{
		A[i] = first + second;
		first = second;
		second = A[i];
	}
	return 0;
}

//******************************************************************************
// End of file
//******************************************************************************