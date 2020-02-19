#include<stdio.h>
int main()
{
    int n, i, x = 0;

    for(i = 0; i <5; ++i)
    {
        scanf("%d", &n);
        if(n < 0)
        {
           n = -n;
        }

        if(n % 2 == 0)
        {
            x++;
        }
    }

    printf("%d valores pares\n", x);

    return 0;

}
