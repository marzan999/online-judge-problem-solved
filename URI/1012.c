#include<stdio.h>
#define PI 3.14159
int main()
{
    double a, b, c, triangle, circle, trapezium, square, rectangle;
    scanf("%lf%lf%lf", &a, &b, &c);

    triangle = 0.5 * a * c;
    circle = PI * c * c;
    trapezium = 0.5 * (a+b) * c;
    square = b * b;
    rectangle = a * b;

    printf("TRIANGULO: %0.3lf\n", triangle);
    printf("CIRCULO: %0.3lf\n", circle);
    printf("TRAPEZIO: %0.3lf\n", trapezium);
    printf("QUADRADO: %0.3lf\n", square);
    printf("RETANGULO: %0.3lf\n", rectangle);

    return 0;
}
