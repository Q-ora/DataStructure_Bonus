#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char bits[5000];
    while(scanf("%s",bits)!=EOF)
    {
        int count0=0, count1=0;
        int len = strlen(bits);
        for(int i=0;i<len;i++)
        {
            if(bits[i]=='0')
                count0++;
            if(bits[i]=='1')
                count1++;
        }

        for(int i=0;i<count1;i++)
            printf("1");
        for(int i=0;i<count0;i++)
            printf("0");

        printf("\n");
    }

    return 0;
}
