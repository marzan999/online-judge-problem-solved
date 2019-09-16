#include<stdio.h>
#include<math.h>
#define PI 3.14159

int main()
{
  double R;
  scanf("%lf", &R);
  printf("VOLUME = %0.3lf\n", ((4/3.0) * (PI * R * R * R)));
}
