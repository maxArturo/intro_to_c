#ifndef __EUCLIDEAN_GCD__
#define __EUCLIDEAN_GCD__

struct Ext_euclidean_solution 
{
  int gcd;
  int x;
  int y;
};

int euclidean_gcd(int a, int b);

struct Ext_euclidean_solution ext_euclidean_gcd(int a, int b);
  
#endif
