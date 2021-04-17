#include <math.h>
#include <stdio.h>
#include "func.h"
//Задание 5
int findFirstNegativeElement(double esp)
{
	double a;
	int i = 0;
	do
	{
		a = func(i);
		printf("%lf\n", a);
		i++;
	} while (fabs(a) <= esp && a < 0);
	return i;
}





