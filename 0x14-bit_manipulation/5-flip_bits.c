#include <stdio.h>
#include "main.h"
/**
 * count_set_bits
unsigned int count_set_bits(unsigned long int n)
{
  unsigned int count;

  count = 0;
    while (n > 0)
      {
        n &= (n - 1);
        count++;
    }
    return count;
}

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diff = n ^ m;
return count_set_bits(diff);
}
