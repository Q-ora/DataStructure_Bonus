#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int i;
        for(i=1;i<n;i++)
        {
            n-=i;
            if(n<i+1) break;
        }

        printf("%d\n",i);
    }

    return 0;
}
