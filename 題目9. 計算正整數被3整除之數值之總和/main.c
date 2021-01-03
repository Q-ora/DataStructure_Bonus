#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int i, sum=0;
        for(i=1;i<=n;i++)
        {
            if(i%3==0)
                sum += i;
        }
        printf("%d\n",sum);
    }

    return 0;
}
