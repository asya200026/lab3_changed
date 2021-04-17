#include <math.h>
#include <stdio.h>
#include "func.h"

//Задание 1
double summ(int n)
{
	double a = 0;
	int i = 0;
	do
	{
		a = a + func(i);
		++i;
	} while (i <= (n - 1));
	return a;
}



