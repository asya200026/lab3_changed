#include <math.h>
#include <stdio.h>
#include "func.h"
//Задание 4
#include <math.h>
#include <stdio.h>
#include "func.h"
//Задание 4
int findFirstElement(double eps)
{
	double a;
	int i = 0;
	do
	{
		a = func(i);
		printf("%lf\n", a);
		if (fabs(a) < eps) break;
		++i;
	} while (i < INFINITY);
	return i;
}





