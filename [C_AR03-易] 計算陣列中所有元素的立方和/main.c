#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, a[6], sum=0;
    for(i=0;i<6;i++){
        if(scanf("%d",&a[i])==EOF)
            return 0;
        sum+=a[i]*a[i]*a[i];
    }
    printf("%d\n",sum);

    return 0;
}
