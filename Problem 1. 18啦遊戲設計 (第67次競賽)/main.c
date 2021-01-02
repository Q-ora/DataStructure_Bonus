#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
    {
        int point=0;
        if(a==b || b==c || c==d || a==d || a==c || b==d) //兩個以上相同
        {
            if(a==b&&b==c || a==b&&b==d || a==c&&c==d || b==c&&c==d) //三個以上相同
            {
                if(a==b&&b==c&&c==d) //全相同
                {
                    printf("WIN\n");
                }
                else //只有三個相同
                {
                    printf("R\n");
                }
            }
            else //只有2個相同
            {
                if(a==b&&c==d || a==c&&b==d || a==d&&b==c) //兩兩相同
                {
                    if(a==b&&c==d)
                    {
                        if(a>c) printf("%d\n",a+a);
                        else printf("%d\n",c+c);
                    }
                    else if(a==c&&b==d)
                    {
                        if(a>b) printf("%d\n",a+a);
                        else printf("%d\n",b+b);
                    }
                    else if(a==d&&b==c)
                    {
                        if(a>b) printf("%d\n",a+a);
                        else printf("%d\n",b+b);
                    }
                }

                else //剩下兩個不同
                {
                    if(a==b) printf("%d\n",c+d);
                    else if(b==c) printf("%d\n",a+d);
                    else if(c==d) printf("%d\n",a+b);
                    else if(a==d) printf("%d\n",b+c);
                    else if(a==c) printf("%d\n",b+d);
                    else if(b==d) printf("%d\n",a+c);
                }

            }
        }
        else //全都不同
        {
            printf("R\n");
        }
    }

    return 0;
}
