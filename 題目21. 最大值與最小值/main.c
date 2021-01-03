#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a[10], min, max;
    int i;

    for(i=0;i<10;i++)
        scanf("%f",&a[i]);

    min = a[0];
    max = a[0];

    for(i=1;i<10;i++)
    {
        if(a[i]>max) max = a[i];
        if(a[i]<min) min = a[i];
    }

    printf("maximum:%.2f\n",max);
    printf("minimum:%.2f\n",min);

    return 0;
}
