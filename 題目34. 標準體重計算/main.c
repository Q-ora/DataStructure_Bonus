#include <stdio.h>
#include <stdlib.h>

int main()
{
    double h;
    int gend;
    while(scanf("%lf%d",&h,&gend)!=EOF)
    {
        if(gend==1)
            printf("%.1lf\n",(h-80)*0.7);
        else
            printf("%.1lf\n",(h-70)*0.6);
    }

    return 0;
}
