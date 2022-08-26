#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n],i,flag=1,j,temp;
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        /*for(i=0; i<n; i++)
            printf("%d\t",a[i]);*/
        for(i=1; i<n; i++)
        {
            if(a[i]-a[i-1]>1 && n>1)
            {
                flag=0;
                break;
            }
        }
        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
    // printf("max1=%d\nmax2=%d\n",max1,max2);

    return  0;
}
