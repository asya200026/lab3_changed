#pragma once
#include <stdio.h>
#include <math.h>

extern double eps;
extern int n, k;
float func(int i);

//������� 1
double summ(int n);


//������� 2
double summ2(double eps);


//������� 3
void print(int n, int k);

//������� 4
int findFirstElement(double esp);


//������� 5
int findFirstNegativeElement(double esp);