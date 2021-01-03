#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        for(int t=0;t<n;t++)
        {
            int p, cat, quant, remain;
            scanf("%d,%d,%d",&p,&cat,&quant);

            if(cat==1)
            {
                remain = p - 17*quant;
            }
            else //cat==2
            {
                remain = p - 25*quant;
            }

            int coin[51]={0};
            while(remain>=50)
            {
                remain -= 50;
                coin[50]++;
            }
            while(remain>=10)
            {
                remain -= 10;
                coin[10]++;
            }
            while(remain>=5)
            {
                remain -= 5;
                coin[5]++;
            }
            while(remain>=1)
            {
                remain -= 1;
                coin[1]++;
            }

            int i;
            for(i=1; i<51; i++){
                if(coin[i])
                {
                    printf("Coin %d:%d",i,coin[i]);
                    break;
                }
            }
            for(int j=i+1;j<51;j++)
                if(coin[j])
                    printf(",Coin %d:%d",j,coin[j]);

            printf("\n");
        }
    }

    return 0;
}
