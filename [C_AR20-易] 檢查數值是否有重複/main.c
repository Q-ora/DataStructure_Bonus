#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a[128];
    while(scanf("%d",&n)!=EOF)
    {
        int i,j;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);

        int no_repeat = 1;
        for(i=0;i<n;i++)
            for(j=i+1;j<n;j++)
                if(a[i]==a[j]) no_repeat=0;

        printf("%d\n",no_repeat);
    }

    return 0;
}
