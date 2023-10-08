#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0 on success
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)", (unsigned long)sizeof(char));
	printf("size of int: %lu byte(s)", (unsigned long)sizeof(int));
	printf("size of long int: %lu byte(s)", (unsigned long)sizeof(long int));
	printf("size of long int: %lu byte(s)", (unsigned long)sizeof(long long int));
	printf("size of float: %lu byte(s)", (unsigned long)sizeof(float));
	return (0);
}
