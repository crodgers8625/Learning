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
  if(n == 0) return 1;
  
  if(n % 2 == 0){
    return power(x,n/2)*power(x,n/2);
  }else{
    return x*power(x,n/2)*power(x,n/2);
  }
}
