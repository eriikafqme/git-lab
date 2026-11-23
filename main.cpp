#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	double k, a, xmin, xmax, dx, x, y;

	puts("Enter k, a, xmin, xmax, dx=");
	scanf_s("%lf %lf %lf %lf %lf", &k, &a, &xmin, &xmax, &dx);

	for (x = xmin; x <= xmax; x += dx)
	{
		y = cbrt(cos(a * x)) + k * cos(a * x) / log(a * x);
		printf("x=%lf y=%lf\n", x, y);
	}
}