#include <stdio.h>

int main()
{
 int n, i;
 int pos = 0, neg = 0, par = 0, im = 0;

 for(i = 0; i < 5; ++i)
 {
  scanf("%d", &n);

  if(n > 0)
  {
   pos++;
  }
  else
  {
   if(n != 0)
   {
    neg++;
   }
  }

  if(n % 2 == 0)
  {
   par++;
  }
  else
  {
   im++;
  }
 }

 printf("%d valor(es) par(es)\n", par);
 printf("%d valor(es) impar(es)\n", im);
 printf("%d valor(es) positivo(s)\n", pos);
 printf("%d valor(es) negativo(s)\n", neg);

 return 0;

}
