#include<stdio.h>

int main()
{
    int w,r,t,i;
    float area, h, area_circle;
    scanf("%d", &t);
    for(i = 0; i<t; i++)
    {
        scanf("%d",&r);

        area = (3.1416)*r*r;

        scanf("%d", &w);

        h = 4*w*w;

        area_circle = area - h;

        printf("%.5f", area_circle);

    }



    return 0;

}
