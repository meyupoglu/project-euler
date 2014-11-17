/*-----------------------------------------------------------------------------
/ By listing the first six prime numbers: 2, 3, 5, 7, 11 and 13. We can see 
/   that the 6th prime is 13.
/ What is the 10001st prime number?
/
/------------------------------------------------------------------------------
/ Project Euler Q7 - Mustafa Eyupoglu - 11/2014
/----------------------------------------------------------------------------*/

#include <stdio.h>

int main(void)
{
  int j;
  int m = 0;
  int t;
  int i;

  for(i = 3; m < 10000; i++)
  {
    for(j = 2; j < i; j++)
    {
      t = i % j;
      
      if(t == 0 || t > ((i + 1) / 2))
      {
        break;
      }
      
      if(t == ((i - 1) / 2))
      {
        m++;
      }

    }
  }
  printf("%d\n", (i - 1));
}