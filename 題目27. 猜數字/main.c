#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ans[5], num[5];
    scanf("%s",ans);
    while(scanf("%s",num)!=EOF)
    {
        if(strcmp(num,"0000")==0)
            break;

        int i, A=0, B=0;
        for(i=0;i<4;i++)
            if(num[i]==ans[i])
                A++;
            else
            {
                for(int j=0;j<4;j++)
                    if(i!=j && num[i]==ans[j])
                        B++;
            }

        printf("%dA%dB\n",A,B);
    }

    return 0;
}
