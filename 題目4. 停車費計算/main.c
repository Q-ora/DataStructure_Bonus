#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
    {
        int time = (c-a)*60 + d-b; //minute
        time = time - (time%30);

        if(time<=120)
            printf("%d\n",time*1);
        else if(time<=240)
            printf("%d\n",120+(time-120)*4/3);
        else
            printf("%d\n",120+160+(time-240)*2);
    }

    return 0;
}
