/*-----------------------------------------------------------------------------
/ The prime factors of 13195 are 5, 7, 13 and 29.
/ What is the largest prime factor of the number 600851475143 ?
/
/
/------------------------------------------------------------------------------
/ Project Euler Q3 - Mustafa Eyupoglu - 03/2014
/----------------------------------------------------------------------------*/

#include <stdio.h>

int main(void)
{
  long n = 600851475143L;
  long i;

  for (i = 2L; i < n; i++) {
    while (n % i == 0) {
      n /= i;
    }
  }
  printf("%ld\n", n);
}


