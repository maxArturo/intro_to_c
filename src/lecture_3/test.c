#include <stdio.h>
#include <stdlib.h>
#include "euclidean_gcd.h"

int main(int arg, char** varargs)
{
  char str[100];
  int a, b;
  struct Ext_euclidean_solution solution;

  printf("enter a: \n ");
  fgets(str, sizeof str, stdin);
  a = atoi(str);

  printf("enter b: \n ");
  fgets(str, sizeof str, stdin);
  b = atoi(str);

  solution = ext_euclidean_gcd(a, b);
  printf("Results are: gcd %d, x %d, y %d \n", solution.gcd, solution.x, solution.y);
}

