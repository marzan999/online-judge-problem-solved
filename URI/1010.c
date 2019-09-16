#include<stdio.h>
int main()
{
    int code1,amount1,code2,amount2;
    double price1,price2,price;

    scanf("%d%d%lf\n", &code1, &amount1, &price1);
    scanf("%d%d%lf", &code2,& amount2, &price2);

    price=(price1 * amount1) + (price2 * amount2);

    printf("VALOR A PAGAR: R$ %.2lf\n", price);

}
