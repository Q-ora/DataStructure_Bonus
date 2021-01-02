#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b,c,d;
    char op;
    while(scanf("%d\n",&n)!=EOF)
    {
        int t;
        for(t=0;t<n;t++)
        {
            op = getchar();
            scanf("%d%d%d%d\n",&a,&b,&c,&d);

            if(op == '+')
                printf("%d %d\n", a+c, b+d);
            else if(op == '-')
                printf("%d %d\n", a-c, b-d);
            else if(op == '*')
                printf("%d %d\n", a*c-b*d, b*c+a*d);
        }
    }

    return 0;
}
