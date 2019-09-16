#include<stdio.h>
int main()
{
    int member,hour;
    double amount;
    scanf("%d %d %lf",&member,&hour,&amount);
    printf("NUMBER = %d\n",member);
    printf("SALARY = U$ %0.2lf\n",hour*amount);
    return 0;
}
