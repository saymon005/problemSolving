#include<stdio.h>
#include<string.h>
int main()
{
    int i=0, t;
    char str[110];
    scanf("%d", &t);
    fflush(stdin);
    char str1[110];

    while(t--)
    {
        fgets(str,110,stdin);

        i = 0;
        int len = 0;

        while(i<strlen(str))
        {
            if(str[i]==' ' || str[i]=='.' || str[i]==',' || str[i]==':' || str[i]=='!' || str[i]=='?' || str[i+1]=='\0')
            {
                for(int j=len-1;j>=0;j--)
                {
                    printf("%c",str1[j]);
                }

                printf("%c",str[i]);
                i++;
                len = 0;
            }
            else if(str[i]>='a' && str[i]<='z')
            {
                str1[len] = str[i];
                i++;
                len++;
            }
        }


    }



    return 0;
}
