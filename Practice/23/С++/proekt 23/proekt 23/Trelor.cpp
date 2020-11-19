#include "Trelor.h" 
#include <cmath> 
#include "Factorial.h" 

float Trelor(float x)
{
	float c = 0;
	for (int n = 0; n <= 4; n++) {
		c = c + pow(-1, n) * pow(x, 2 * n + 1) / Factorial(2 * n + 1);
	}
	return c;
}
