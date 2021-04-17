#include <math.h>
#include <stdio.h>
#include "func.h"
//Задание 4
int findFirstElement(double esp)
{
	double a;
	int i = 0;
	while (i < INFINITY)
	{
		a = func(i);
        printf("%lf\n", a);
		if (fabs(a) <= esp) break;
		++i;
	}
	return i;
}

