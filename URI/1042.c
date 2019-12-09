#include <stdio.h>

void x(int a, int b, int c)
{
    int minimum, middle, maximum;
    if(a < b && a < c)
        {
           minimum = a;
           if(b < c)
             {
                middle = b;
                maximum = c;
             }
          else
            {
                middle = c;
                maximum = b;
            }
       }
    else if(b < a && b < c)
        {
           minimum = b;
           if(a < c)
           {
            middle = a;
            maximum = c;
        }
        else
            {
               middle = c;
               maximum = a;
           }
    }
      else
        {
           minimum = c;
           if(a < b)
           {
              middle = a;
              maximum = b;
        }
      else
        {
            middle = b;
            maximum = a;
        }
    }
    printf("%d\n%d\n%d\n", minimum, middle, maximum);

}

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    x(a, b, c);
    printf("\n%d\n%d\n%d\n", a, b, c);

    return 0;
}
