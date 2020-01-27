#include<stdio.h>
int main()
{

    int start_hour, end_hour, start_minute, end_minute, duration_hour, duration_minute;
    scanf("%d%d%d%d", &start_hour, &start_minute, &end_hour, &end_minute);

    duration_hour = end_hour - start_hour;

    if(duration_hour < 0)
    {
        duration_hour = 24 + (end_hour - start_hour);
    }

    duration_minute = end_minute - start_minute;

    if(duration_minute < 0)
    {
        duration_minute = 60 + (end_minute - start_minute);
        duration_hour--;
    }

    if(start_hour == end_hour && start_minute == end_minute)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else

      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration_hour, duration_minute);

    return 0;
}
