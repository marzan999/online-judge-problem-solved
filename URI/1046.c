#include <stdio.h>

int main()

{

    int start, end, duration;

    scanf("%d%d", &start, &end);

    duration = end - start;

    if (duration < 0)

    {

        duration = 24 + (end - start);

    }

    if (start == end)

    {

        printf("O JOGO DUROU 24 HORA(S)\n");

    }

    else printf("O JOGO DUROU %d HORA(S)\n", duration);



    return 0;

}
