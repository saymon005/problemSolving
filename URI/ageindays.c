#include<stdio.h>

int main()
{
    int d, year, month, day;
    scanf("%d", &d);
    year = d/365;
    d = d%365;
    month = d/30;
    day = d%30;

    printf("%d ano(s)\n", year);
    printf("%d mes(es)\n", month);
    printf("%d dia(s)\n", day);

    return 0;
}
