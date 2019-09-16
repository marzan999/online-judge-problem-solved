#include<stdio.h>

int main()
{
    int distance;
    double fuel, efficiency;
    scanf("%d%lf", &distance, &fuel);
    efficiency = distance/fuel;
    printf("%0.3lf km/l\n", efficiency);

    return 0;

}
