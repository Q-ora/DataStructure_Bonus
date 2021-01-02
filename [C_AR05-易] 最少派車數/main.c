#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max; //同時間最多有幾台
    int n;
    int s[30], d[30];
    while(scanf("%d",&n)!=EOF)
    {
        int i;
        for(i=0;i<n;i++)
            scanf("%d%d",&s[i],&d[i]);

        int time;
        max = 0;
        for(time=1;time<=24;time++)
        {
            int num=0;
            for(i=0;i<n;i++)
            {
                if( time>=s[i] && time<=d[i] )
                    num++;

                for(int j=i+1;j<n;j++)  //檢查是否為換班時間
                    if( time==d[i] && d[i]==s[j] ) num--;
            }

            if(num>max)
                max = num;
        }
        printf("%d\n",max);
    }

    return 0;
}
