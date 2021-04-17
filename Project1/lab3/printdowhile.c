#include <math.h>
#include <stdio.h>
#include "func.h"
//Задание 3
void print(int n, int k)
{
	double a; 
       double i = 0; 
	do
	{
		a = func(i);
		if (i == k) continue;
	      printf(" Результат: %lf\n", a);
		++i;
	} while (i <= n);
	}

