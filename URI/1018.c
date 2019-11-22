#include <stdio.h>
int main()
{
    int notes, excessive;

    scanf("%d", &notes);

    printf("%d\n", notes);

    printf("%d nota(s) de R$ 100,00\n", notes / 100);
    excessive = (notes % 100);

    printf("%d nota(s) de R$ 50,00\n", excessive / 50);
    excessive = (excessive % 50);

    printf("%d nota(s) de R$ 20,00\n", excessive / 20);
    excessive = (excessive % 20);

    printf("%d nota(s) de R$ 10,00\n", excessive / 10);
    excessive = (excessive % 10);

    printf("%d nota(s) de R$ 5,00\n", excessive / 5);
    excessive = (excessive % 5);

    printf("%d nota(s) de R$ 2,00\n", excessive / 2);
    excessive = (excessive % 2);

    printf("%d nota(s) de R$ 1,00\n", excessive / 1);

    return 0;

}
