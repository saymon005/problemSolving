#include<stdio.h>
int main()
{
    float n, i, avrg, sum = 0;
    int count = 0;
    for (i = 0; i<6; i++)
    {
         scanf("%f", &n);
         if(n>0)
         {
             count ++;
             sum += n;
         }
         avrg = sum/count;
    }
    printf("%d valores positivos\n", count);
    printf("%.1f\n", avrg);

   return 0;

}
