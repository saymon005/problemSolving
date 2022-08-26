#include<stdio.h>

int main()
{
    int s, second, minute, hour;
    scanf("%d", &s);

    hour = s/3600;
    s = s%3600;
    minute = s/60;
    second = s%60;
    printf("%d:%d:%d\n", hour, minute, second);

    return 0;
}
