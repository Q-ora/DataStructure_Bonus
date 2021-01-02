#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n;
    while(scanf("%lf",&n)!=EOF)
    {
        printf("%.1lf\n",n*1.6);
    }

    return 0;
}
