#include <stdio.h>
#include <stdlib.h>

int main()
{
    char num[5];
    while(scanf("%s",num)!=EOF)
    {
        int i;
        for(i=0;i<4;i++)
        {
            int tmp = num[i] - '0';
            tmp = (tmp+7)%10;
            num[i] = '0'+tmp;
        }

        char t;
        t = num[0];
        num[0] = num[2];
        num[2] = t;

        t = num[1];
        num[1] = num[3];
        num[3] = t;

        printf("%s\n",num);
    }

    return 0;
}
