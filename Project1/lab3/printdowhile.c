#include <math.h>
#include <stdio.h>
#include "func.h"
//������� 3
void print(int n, int k)
{
	double a; 
       double i = 0; 
	do
	{
		a = func(i);
		if (i == k) continue;
	      printf(" ���������: %lf\n", a);
		++i;
	} while (i <= n);
	}

