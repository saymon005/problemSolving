#include<stdio.h>

int  main()
{
    int n, max, c;

    scanf("%d", &n);
    scanf("%d", &max);

    for(int i = 2; i <= n; i++)
    {
        scanf("%d", &c);


    if(max < c)

        max = c;

    }

    printf("%d", max);



    return 0;

}
