#include <math.h>
#include <stdio.h>
#include "func.h"
//Задание 4
int findFirstElement(double esp)
{
	double a;
	int i;
	for (i = 0; i<INFINITY; ++i)
	{
		a = func(i);
        printf("%lf\n", a);
		if (fabs(a) <= esp) break;
	}
	return i;
}

