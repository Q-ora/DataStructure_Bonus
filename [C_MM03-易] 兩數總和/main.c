#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    while(scanf("%d %d",&x,&y)!=EOF)
    {
        printf("%d\n",x+y);
    }

    return 0;
}
