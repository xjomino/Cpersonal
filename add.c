#include <stdio.h>
#include <stdlib.h>

int integer_add (int x, int y)
{
	int result;
	result = x + y;
	return result;
}
int main ()
{
	int sum;
	sum = integer_add(5,12);
	printf("the addition of 5 and 12 is %d.\n", sum);
	return 0;
}
