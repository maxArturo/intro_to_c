#include <stdbool.h>
#include "euclidean_gcd.h"

int euclidean_gcd(int a, int b) 
{
  // check for non-0 remainder
  while (b) {
    // if a < b, swaps a with b
    // otherwise b becomes remainder and a becomes the newest common denominator
    int temp = b;
    b = a % b;
    a = temp;
  }
  // will return when a % b gives 0

  return a;
}

struct Ext_euclidean_solution ext_euclidean_gcd(int a, int b)
{
  struct Ext_euclidean_solution solution;

  int prev_x = 1, x = 0;
  int prev_y = 0, y = 1;
  int quot, temp;
  
  while (b) {
    quot = a / b;
    
    // update x
    temp = x;
    x = prev_x - (quot * x), prev_x = temp;

    // update y
    temp = y;
    y = prev_y - (quot * y), prev_y = temp;

    temp = b;
    b = a % b;
    a = temp;
  }

  solution.gcd = a;
  solution.x = prev_x;
  solution.y = prev_y;

  return solution;
}

