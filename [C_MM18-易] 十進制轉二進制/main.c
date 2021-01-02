#include <stdio.h>
#include <stdlib.h>

int pow(int ,int);

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int i, num_of_bits=0, tmp;

        //正數
        if(n>=0)
        {
            tmp = n;
            while(tmp)
            {
                tmp/=2;
                num_of_bits++;
            }

            for(i=num_of_bits+1; i<=8; i++)
            {
                printf("0");
            }

            for(i=num_of_bits; i>0; i--)
            {
                if( (n%pow(2,i))/pow(2,i-1) )
                    printf("1");
                else
                    printf("0");
                n %= pow(2,i-1);
            }
        }

        //負數
        else
        {
            //二補數
            n *= -1;
            n = pow(2,8) - n;

            tmp = n;
            while(tmp)
            {
                tmp/=2;
                num_of_bits++;
            }

            for(i=num_of_bits+1; i<=8; i++)
            {
                printf("0");
            }

            for(i=num_of_bits; i>0; i--)
            {
                if( (n%pow(2,i))/pow(2,i-1) )
                    printf("1");
                else
                    printf("0");
                n %= pow(2,i-1);
            }
        }
        printf("\n");
    }

    return 0;
}

int pow(int a, int b)
{
    int i, pow=1;
    for(i=0;i<b;i++)
        pow *= a;
    return pow;
}
