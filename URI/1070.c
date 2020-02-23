#include<stdio.h>
int main()
{
   int i, num=0;
   scanf("%d",&num);

   for (i=1; i<=11; i++)
    {
       num++;

       if(num%2!=0)
         {
            printf("%d\n",num);
         }
    }
}
