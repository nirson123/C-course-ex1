#include "myMath.h"
#define EXP 2.71828182846

double Exponent(int x) {
	if (x >= 0) {
		double result = 1;
		int i;
		for (i = 0; i < x; i++)
			result *= EXP;
		return result;
	}
	else return (1 / Exponent(-x));
}

double Power(double x, int y) {
	if (y >= 0) {
		double result = 1;
		int i;
		for (i = 0; i < y; i++)
			result *= x;
		return result;
	}
	else return (1 / Power(x, -y));
}