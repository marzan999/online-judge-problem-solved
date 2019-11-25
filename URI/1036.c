#include<stdio.h>
int main()
{
    double A, B, C, X;
    scanf("%lf%lf%lf", &A, &B, &C);

    if(((B * B) - 4 * A * C) < 0 || A == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        X = sqrt((B * B) - 4 * A * C);
        printf("R1 = %0.5lf\nR2 = %0.5lf\n", ((-B + X) / (2 * A)), ((-B - X) / (2 * A)));
    }
    return 0;
}
