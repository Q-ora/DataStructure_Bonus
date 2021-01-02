#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[500];
    int count=0;

    while(fgets(str,500,stdin))
    {
        while(str[count]!='\n' && str[count]!='\0' && str[count]!='\r')
            count++;
        printf("There are %d characters\n", count);
    }


    return 0;
}
