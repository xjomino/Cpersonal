#include <stdio.h>
/**
 * main - Entry point
 * This program obtains the size of datatypes
 *
 * Return: Always 0 (successful)
 */
int main(void)
{
	printf("The size of char: %ld bytes\n", sizeof(char));
	printf("The size of integer: %ld bytes\n", sizeof(int));
	printf("The size of double: %ld bytes\n", sizeof(double));
	printf("The size of a long interger: %ld bytes\n", sizeof(long int));
	return (0);
}
