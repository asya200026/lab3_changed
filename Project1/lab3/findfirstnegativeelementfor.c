#include <math.h>
#include <stdio.h>
#include "func.h"
//Задание 5
int findFirstNegativeElement(double esp)
{
	double a;
	for (int i = 0; i < INFINITY; ++i)
	{
		a = func(i);
		if (fabs(a) <= esp && a < 0)
			return i;
                   printf("%lf\n", a);

       }
}

