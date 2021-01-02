#include <stdio.h>
#include <stdlib.h>

int main()
{
    double bottom, height;
    while(scanf("%lf %lf",&bottom,&height)!=EOF)
    {
        printf("%.1lf\n",bottom*height/2);
    }

    return 0;
}
