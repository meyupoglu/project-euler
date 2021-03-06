/*-----------------------------------------------------------------------------
/ If we list all the natural numbers below 10 that are multiples of 
/ 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
/
/ Find the sum of all the multiples of 3 or 5 below 1000.
/------------------------------------------------------------------------------
/ Project Euler Q1 - Mustafa Eyupoglu - 03/2014
/----------------------------------------------------------------------------*/
#include <stdio.h>

int main()
{
	int i;
	int result = 0;
	
	for (i=0; i<1000; i++)
	{
		if(i%3 == 0)
		{
			result = i + result;
		}
		else if(i%5 == 0)
		{
			result = i + result;
		}		
	}

	printf("%d\n", result);

	return 0;
}
