#include <stdio.h>

int main(void)
{
	char character;

	for(character = 'a'; character <= 'z'; character+)
	{
		putchar(character);
	}

	for(character = 'A'; character <= 'Z'; character++)
	{
		putchar(character);
	}	
 	
	printf("\n");                                                                               

	return (0);
}	

