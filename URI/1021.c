
#include <stdio.h>

int main() {
    int note100, note50, note20, note10, note5, note2;
    int coin1, coin50, coin25, coin10, coin05, coin01;
    double note;

    scanf("%lf", &note);
    int notas = note;
    int moedas = (note - notas) * 100;

    if((moedas * 1000) % 10 == 9)
    {
        moedas++;
    }


    note100 = notas/100;
    notas = notas%100;
    note50 = notas/50;
    notas = notas%50;
    note20 = notas/20;
    notas = notas%20;
    note10 = notas/10;
    notas = notas%10;
    note5 = notas/5;
    notas = notas%5;
    note2 = notas/2;
    notas = notas%2;

    coin1 = notas/1;
    notas = notas%1;
    coin50 = moedas/50;
    moedas = moedas%50;
    coin25 = moedas/25;
    moedas = moedas%25;
    coin10 = moedas/10;
    moedas = moedas%10;
    coin05 = moedas/5;
    moedas = moedas%5;
    coin01 = moedas/1;

    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", note100);
    printf("%d nota(s) de R$ 50.00\n", note50);
    printf("%d nota(s) de R$ 20.00\n", note20);
    printf("%d nota(s) de R$ 10.00\n", note10);
    printf("%d nota(s) de R$ 5.00\n", note5);
    printf("%d nota(s) de R$ 2.00\n", note2);

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", coin1);
    printf("%d moeda(s) de R$ 0.50\n", coin50);
    printf("%d moeda(s) de R$ 0.25\n", coin25);
    printf("%d moeda(s) de R$ 0.10\n", coin10);
    printf("%d moeda(s) de R$ 0.05\n", coin05);
    printf("%d moeda(s) de R$ 0.01\n", coin01);

    return 0;
}
