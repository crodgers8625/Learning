#include <stdio.h>
#include <stdlib.h>

#define MAX 20
#define BASE 2

double power(double x, int n);

int main()
{
  int k, b = BASE;
  
  for(k = 0; k <= MAX; ++k){
    printf("%1f\n", power(b,k));
  }
  
  return 0;
}

double power(double x, int n)
{
  double prod = 1;
  int i;
  
  if(n == 0) return 1;
  
  for(i = 0; i < n; ++i){
  prod *= x;
  }
  
  return prod;
}
