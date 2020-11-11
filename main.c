int main() {
	#include <stdio.h>
	#include "myMath.h"

	double x;
	printf("Please inset a real number: ");
	scanf("%lf", &x);

	double result;
	// first calculation
	result = Exponent((int)x);
	result = add(result, Power(x, 3));
	result = sub(result, 2);
	printf("The value of f(x) = e^x + x^3 -2 at the point %.4lf is %.4lf\n", x, result);

	//scond calculation
	result = Power(x, 2);
	result = mul(result, 2);
	result = add(result, mul(3, x));
	printf("The value of f(x) = 3x + 2x^2 at the point %.4lf is %.4lf\n", x, result);

	//theird calculation
	result = Power(x, 3);
	result = mul(result, 4);
	result = div(result, 5);
	result = sub(result, mul(x, 2));
	printf("The value of f(x) = (4x^3)/5-2x at the point %.4lf is %.4lf\n", x, result);
}