#include <stdio.h>
#include <stdlib.h>

int main()
{
    double up, low, height;
    while(scanf("%lf %lf %lf",&up,&low,&height)!=EOF)
    {
        printf("Trapezoid area:%.1lf\n",(up+low)*height/2);
    }

    return 0;
}
