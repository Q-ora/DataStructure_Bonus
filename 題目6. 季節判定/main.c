#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
    while(scanf("%d",&m)!=EOF)
    {
        if(3<=m && m<=5)
            printf("Spring\n");
        else if(6<=m && m<=8)
            printf("Summer\n");
        else if(9<=m && m<=11)
            printf("Autumn\n");
        else
            printf("Winter\n");
    }

    return 0;
}
