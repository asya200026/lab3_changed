#include <math.h>
#include <stdio.h>
#include "func.h"

//Задание 5
int findFirstNegativeElement(double esp)
{
	int i = 0;
	double a = func(i);

	while (fabs(a) <= esp && a < 0)
		{			
		    a = func(i);
                 printf("%lf\n", a);
                 i++;
             }
	       return i;
}

