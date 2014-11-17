/*-----------------------------------------------------------------------------
/ 2520 is the smallest number that can be divided by each of the numbers from
/ 1 to 10 without any remainder.
/ What is the smallest positive number that is evenly divisible by all of the
/ numbers from 1 to 20?
/------------------------------------------------------------------------------
/ Project Euler Q5 - Mustafa Eyupoglu - 11/2014
/----------------------------------------------------------------------------*/

#include <stdio.h>

int main(void)
{
  int i = 1;
  int j, k, l;
  int m = 0;

  do 
  {
    m = 0;
    
    for(j = 1; j <= 20; j++)
    {
      k = i % j;
      
      if(k == 0)
      {
        m++;
      }
      else
      {
        break;
      }

      if(m == 20)
      {
        l = i;
      }
    }
    
    i++;
  } while (m < 20);
  
  printf("%d \n", l);
}