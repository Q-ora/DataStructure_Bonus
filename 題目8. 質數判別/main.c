#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int i, isprime=1;
        for(i=2;i<n;i++)
            if(n%i==0)
                isprime=0;

        if(isprime)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
