#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int last_digit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
        last_digit= n % 10;
	
	if(last_digit > 5)
	{
		printf("Last digit of %d is greater than 5", n);
	}
	else if(last_digit == 0)
	{
		printf("Last digit of %d is 0", n);
	}
	else if(last_digit < 6)
	{
		printf("Last digit of %d is less than 6 and not 0", n);
	}

	return (0);
}
