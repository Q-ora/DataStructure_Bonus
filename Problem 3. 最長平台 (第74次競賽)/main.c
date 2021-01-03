#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int m;
    scanf("%d",&m);
    for(int t=0;t<m;t++)
    {
        int n, count[10]={0};
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            int pos;
            scanf("%d",&pos);
            count[pos]++;
        }

        int max=0;
        for(int i=0;i<n;i++)
        {
            if(count[i]>max)
                max = count[i];
        }
        printf("%d\n",max);
    }

    return 0;
}
