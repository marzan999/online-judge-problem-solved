#include <stdio.h>
int main()
{
 int x, y, z = 0, i;
 int min, max;

 scanf("%d%d", &x, &y);

 if(x < y)
    {
       min = x;
       max = y;
    }
 else
    {
      max = x;
      min = y;
    }

 for(i = (min + 1); i < max; ++i)
 {
  if(i % 2 == 1 || i % 2 == -1)
    {
       z += i;
    }
 }

 printf("%d\n", z);

 return 0;
}
