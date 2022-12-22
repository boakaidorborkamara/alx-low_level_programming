#include <stdio.h>

/**
 * main - Entry point
 * Description: A program that prints the size of each data type
 * Return: Returns zero for success each time
*/

int main(void)
{
	printf("Size of an char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of an long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of an long long: %ld byte(s)\n", sizeof(long long));
	printf("Size of an float: %ld byte(s)\n", sizeof(float));

	return (0);

}
