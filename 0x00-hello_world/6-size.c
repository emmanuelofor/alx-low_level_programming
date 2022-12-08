#include <stdio.h>
/**
 * main - print out sizes of data types in c
 * code by Emmanuel Ofori
 * Return: 0
*/

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of a int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %i  byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
	printf("Size of float: %i byte(s)\n", sizeof(float));
	return (0);
}
