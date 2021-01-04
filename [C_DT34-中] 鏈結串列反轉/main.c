#include <stdio.h>
#include <stdlib.h>

typedef struct Node* NodePtr;
typedef struct Node{
    int num;
    NodePtr link;
}Node;

int main()
{
    //create linked list
    NodePtr first = malloc(sizeof(Node));
    NodePtr tmp = first;
    for(int i=0;i<10000;i++)
    {
        tmp->link = malloc(sizeof(Node));
        tmp = tmp->link;
    }

    NodePtr last = first;
    while(scanf("%d",&(last->num))!=EOF)
        last = last->link;
    //此時last指向最後一個節點的link


    //--------反轉---------//
    NodePtr current = first, previous = NULL, next = first->link;  //current:first, previous:current的前一個, next:current的下一個
    //將剩下的節點link反轉
    while(current != last)
    {
        current->link = previous;
        previous = current;
        current = next;
        next = next->link;
    }


    printf("%d",previous->num);
    previous = previous->link;
    while(previous!=NULL)
    {
        printf(" %d",previous->num);
        previous = previous->link;
    }
    puts("");

    free(first);

    return 0;
}
