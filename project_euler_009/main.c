/*-----------------------------------------------------------------------------
/ A Pythagorean triplet is a set of three natural numbers, a < b < c, for 
/   which, 
/     a^2 + b^2 = c^2
/ For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2
/ There exist one Pythagorean triplet for which a + b + c = 1000.
/ Find the product abc.
/------------------------------------------------------------------------------
/ Project Euler Q9 - Mustafa Eyupoglu - 11/2014
/----------------------------------------------------------------------------*/

#include <stdio.h>

int main(void)
{
  int a;
  int b;
  int c;

  for(a = 0; a < 400; a++)
  {
    for(b = 0; b < 400; b++)
    {
      c = 1000 - a - b;

      if(((a * a) + (b * b) - (c * c)) == 0 && b > a)
      {
        printf("%d\n", a * b * c);
      }
    }
  }
}