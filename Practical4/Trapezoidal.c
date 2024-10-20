#include <stdio.h>
#include <math.h>

#define n 12
float TanX[n+1]; // An array of values of tan(x)
float degtorad(float degarg);
float areaCalc();

int main(void)
{
	int i;
	float deg;
	float a = 0.0;
	float b = 60.0;

	// Calculate the area at points x1, x2, x3, ..., x11
	for (i = 0; i < n+1; i++)
	{
		deg = i * 5.0;
		TanX[i] = tan(degtorad(deg));
		printf("TanX[%d]  = %f\n", i, TanX[i]);
	}

	float area = areaCalc();

	// Approximated result
	printf("\nTrapezoidal resut is: %f\n", area);

	//Actual result - integral of tan = log(2)
	printf("Real result is: %f\n", log(2.0));

	return 0;
}

// The following function converts the angles in degrees to radians
float degtorad(float degarg)
{
	float pi = 3.1415927;

	return (pi * degarg)/180.0;
}

// The following function computes the area under the tan(x) curve using the
// trapeizodal rule
float areaCalc() {
	float area;
	float a = 0.0, b = 60.0;
	int i;

	// sum tan(a) = tan(b) where a and b are in radians
	area = TanX[0] + TanX[n];
	printf("\nInitial area (sum at x(0) and x(12) = %f\n", area);

	for (i = 1; i < n; i++) {
		area = area + 2 * TanX[i];
	}

	printf("The value of the sum after the loop is: %f\n", area);

	// Multiply area by pi/3/(2*n) after converting it too radians
	float mult_rad = (degtorad(b - a))/(2 * n) ;
	area = mult_rad * area;

	return area;
}
