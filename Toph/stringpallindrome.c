#include <stdio.h>
#include <string.h>

int main()
{
    char string1[99];
    int i, length;
    int flag = 0;

     gets(string1);

    length = strlen(string1);

    for(i=0;i < length; i++)
        {
        if(string1[i] != string1[length-i-1])
        {
            flag = 1;
            break;
        }

        }

    if (flag) {
        printf("NO", string1);
    }
    else {
        printf("Yes", string1);
    }
    return 0;
}


