#include <stdio.h>
#include <stdlib.h>
#define R 100


int main()
{
    int x, y;
    scanf("%d %d",&x,&y);

    if(x*x+y*y <= R*R)
        printf("inside\n");
    else
        printf("outside\n");

    return 0;
}
