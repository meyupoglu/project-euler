/*-----------------------------------------------------------------------------
/ The sum of squares of the first ten natural numbers is,
/     1^2 + 2^2 +...+ 10^2 = 385
/ The square of the sum of the first ten natural numbers is,
/     (1 + 2 +...+ 10)^2 = 55^2 = 3025
/ Hence the difference between the sum of the squares of the first ten natural
/   numbers and the square of the sum is 3025 - 385 = 2640
/
/ Find the difference between the sum of the squares of the first one hundred
/   natural numbers and the square of the sum.
/------------------------------------------------------------------------------
/ Project Euler Q6 - Mustafa Eyupoglu - 11/2014
/----------------------------------------------------------------------------*/

#include <stdio.h>

int main(void)
{
  int i;
  int j;
  int k = 0;
  int l = 0;

  for (i = 0; i <= 100; i++)
  {
    k = k + (i * i);
  }

  for (j = 1; j <= 100; j++)
  {
    l = l + j;
  }

  printf("%d\n", ((l * l) - k));
}