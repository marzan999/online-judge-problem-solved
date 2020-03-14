#include<stdio.h>
int main()
{
    int i, n, avg;
    double a, b, c;
    scanf("%i", &n);
    for(i=0;i<n;++i)
    {
        scanf("%lf%lf%lf", &a, &b, &c);

        double avg = ((a/10) * 2) + ((b/10) * 3) + ((c/10) * 5);

        printf("%0.1f\n", avg);
    }
    return 0;
}
