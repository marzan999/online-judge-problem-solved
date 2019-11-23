#include<stdio.h>
int main()
{
    int year, month, day, excessive;

    scanf("%d", &day);

    year = day / 365;
    excessive = day % 365;
    month = excessive / 30;
    excessive = excessive % 30;
    day = excessive;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, day);

    return 0;
}
