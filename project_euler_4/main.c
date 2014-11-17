/*-----------------------------------------------------------------------------
/ A palindrome number reads the same both ways. The largest palindrome made
/ from the product of two 2-digit number is 9009 = 91 * 99
/
/ Find the largest palindrome made from the product of two 3-digit numbers. 
/------------------------------------------------------------------------------
/ Project Euler Q4 - Mustafa Eyupoglu - 11/2014
/----------------------------------------------------------------------------*/

#include <stdio.h>

int func(int m);

int main(void)
{
  int p = 0;
  int i, j, k, l, m;

  for (i = 100; i < 1000; i++)
  {
  	for(j = 100; j < 1000; j++)
  	{
  		k = i * j;
	  	l = k / 1000;
  		m = k % 1000;
  		
		 	if (m == func(l) && k > p)
		 	{
		 		p = k;
		 	}	
  	}
  }

  printf("%d\n", p);
}

int func(int m)
{
	int a, b, c, n;

	a = m / 100;
	c = m % 10;
	b = (m / 10) - 10 * a;
	n = a  + (10 * b) + (100 * c);

	return n;
}