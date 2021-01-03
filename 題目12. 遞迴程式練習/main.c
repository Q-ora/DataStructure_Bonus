#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n",f(n));
    }

    return 0;
}

int f(int k)
{
    if(k==0 || k==1)
        return k+1;
    else
        return f(k-1) + f(k/2);
}
