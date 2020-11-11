#include "myMath.h"
#define EXP 2.71828182846

double Exponent(int x) {
	if (x >= 0) {						//if the power is not negative,
		double result = 1;
		int i;
		for (i = 0; i < x; i++){		//multiply e by itself x times
			result *= EXP;
		}
		return result;					//and return the result
	}
	else return (1 / Exponent(-x));		//if the power is negative, return 1 over e^|x| (by definition of negative power)
}

double Power(double x, int y) {
	if(x == 0){return 0}				//if the base is zero, return 0 (assume valid input, meanning no 0^0)
	if (y >= 0) {						//if the power is not negative, 
		double result = 1;
		int i;
		for (i = 0; i < y; i++){		//multiply x by itself y times
			result *= x;
		}
		return result;					//and return the result
	}
	else return (1 / Power(x, -y));		//if the power is negative, return 1 over x^|y| (by definition of negative power)
}