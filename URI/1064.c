#include <stdio.h>
int main()
  {
  float n1,total = 0,average = 0;
  int i, totalNumber = 0;

  for(i = 1; i <= 6; i++)
    {
   scanf("%f", &n1);

   if (n1 > 0)
    {
    totalNumber += 1;
    total += n1;
    }
  }

  average = total / totalNumber;

  printf("%d valores positivos\n", totalNumber);
  printf("%.1f\n",average);

}
