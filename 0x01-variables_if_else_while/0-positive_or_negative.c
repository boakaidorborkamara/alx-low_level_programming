#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/** A function that prints is positive if a random 
 * generated number is greater than zero, negative 
 * if it is less than zero, and zero if it is zero 
* */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
      	if(n > 0)
	{
       		printf("%d is positive\n", n);
	}
	else if( n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	} 
	
	return (0);
}
