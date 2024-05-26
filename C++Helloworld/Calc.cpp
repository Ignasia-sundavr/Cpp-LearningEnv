
#include "Header.h"

int Multiply(int a, int b)
{
	return a * b;
}

void Calculate(int a, int b)
{
	int result = Multiply(a, b);
	LogNum(result);
}
