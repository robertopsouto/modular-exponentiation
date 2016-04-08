/*
  Exponenciacao modular: codigo serial 
*/

#include <stdio.h>
#include <math.h>

int main()
{
  int n, k, d, i, l;
  int resultado, pot;

  scanf("%d", &n);
  scanf("%d", &k);
  scanf("%d", &d);

  pot = n % d;
  resultado = 0;

  l = ceil(log(k)/log(2))-1;
  printf("%d\n", l);

  for (i=l ; i >= 0; i--) {
    if ( (k >> i)%2 == 1)  
          resultado +=(int)(pow(pot,i))%d;

    printf("%d \t %d \t %d \n",resultado,pot,(k>>i)%2);
  }

  printf("%d\n", resultado);

  return 0;
}
  
