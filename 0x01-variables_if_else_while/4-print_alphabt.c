#include <stdio.h>

int main(void)
{
	char character;

	for(character = 'a'; character <= 'z'; character++)
	{
		if(character != 'e' || character != "q")
		{
			putchar(character);
		}	
	}	
 	
	printf("\n");                                                                               

	return (0);
}	

