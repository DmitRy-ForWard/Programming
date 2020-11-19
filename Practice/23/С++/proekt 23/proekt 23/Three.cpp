#include "Three.h" 
#include "Factorial.h" 

int Three(int k, int n)
{
	int c = 0;
	c = Factorial(n) / (Factorial(k) * Factorial(n - k));
	return c;
}