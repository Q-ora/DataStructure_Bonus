#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y;
    while(scanf("%d",&y)!=EOF)
    {
        if(y%4==0)
        {
            if(y%100==0)
            {
                if(y%400==0)
                {
                    printf("Bissextile Year\n");
                }
                else //y%400!=0
                {
                    printf("Common Year\n");
                }
            }
            else //y%100!=0
            {
                printf("Bissextile Year\n");
            }
        }
        else //y%4!=0
        {
            printf("Common Year\n");
        }
    }

    return 0;
}
