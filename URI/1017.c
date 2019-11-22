#include<stdio.h>
int main()
{
    int efficiency = 12;
    double time, speed, fuel;

    scanf("%lf%lf", &time, &speed);

    fuel = (time * speed)/12;

    printf("%0.3lf\n", fuel);
}
