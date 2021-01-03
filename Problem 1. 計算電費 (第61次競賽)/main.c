#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        for(int t=0;t<n;t++)
        {
            double m;
            scanf("%lf",&m); //度數

            if(m>700)
                printf("Summer months:%.2lf\n", 2.1*120 + 3.02*210 + 4.39*170 + 4.97*200 + 5.63*(m-700));
            else if(m>500)
                printf("Summer months:%.2lf\n", 2.1*120 + 3.02*210 + 4.39*170 + 4.97*(m-500));
            else if(m>330)
                printf("Summer months:%.2lf\n", 2.1*120 + 3.02*210 + 4.39*(m-330));
            else if(m>120)
                printf("Summer months:%.2lf\n", 2.1*120 + 3.02*(m-120));
            else
                printf("Summer months:%.2lf\n", 2.1*m);

            if(m>700)
                printf("Non-Summer months:%.2lf\n", 2.1*120 + 2.68*210 + 3.61*170 + 4.01*200 + 4.5*(m-700));
            else if(m>500)
                printf("Non-Summer months:%.2lf\n", 2.1*120 + 2.68*210 + 3.61*170 + 4.01*(m-500));
            else if(m>330)
                printf("Non-Summer months:%.2lf\n", 2.1*120 + 2.68*210 + 3.61*(m-330));
            else if(m>120)
                printf("Non-Summer months:%.2lf\n", 2.1*120 + 2.68*(m-120));
            else
                printf("Non-Summer months:%.2lf\n", 2.1*m);
        }
    }

    return 0;
}
