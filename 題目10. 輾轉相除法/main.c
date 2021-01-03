#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        int g = gcd(a,b);
        printf("%d\n",g);
    }

    return 0;
}

int gcd(int a, int b)
{
    if(a==0)
        return b;

    int t=a;
    a=b%a;
    b=t;
    gcd(a,b);
}
