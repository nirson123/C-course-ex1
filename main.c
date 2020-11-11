int main() {
	#include <stdio.h>
	#include "myMath.h"

	// input from the user
	double x;
	printf("Please inset a real number: ");
	scanf("%lf", &x);

	double result;
	// first calculation
	result = Exponent((int)x);				//take e to the power of x
	result = add(result, Power(x, 3));		//add x^3
	result = sub(result, 2);				//add 2
	//print the result
	printf("The value of f(x) = e^x + x^3 -2 at the point %.4lf is %.4lf\n", x, result);

	//scond calculation
	result = Power(x, 2);					//take x^2
	result = mul(result, 2);				//multiply by 2
	result = add(result, mul(3, x));		//add 3x
	//print the result
	printf("The value of f(x) = 3x + 2x^2 at the point %.4lf is %.4lf\n", x, result);

	//theird calculation
	result = Power(x, 3);					//take x^3
	result = mul(result, 4);				//mutiply by 4
	result = div(result, 5);				//divide by 5
	result = sub(result, mul(x, 2));		//substract x^2
	//print the result
	printf("The value of f(x) = (4x^3)/5-2x at the point %.4lf is %.4lf\n", x, result);
}