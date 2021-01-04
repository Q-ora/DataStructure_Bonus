#include <stdio.h>
#include <stdlib.h>

void enqueue(int *cirQueue, int n, int *front, int *rear, int num);
int dequeue(int *cirQueue, int n, int *front, int *rear);

int main()
{
    int n, front, rear;
    scanf("%d",&n);
    front = n-1;
    rear = n-1;

    int *cirQueue = malloc(sizeof(int)*n); //create circular queue of size n

    int instruction;
    while(scanf("%d",&instruction))
    {
        if(instruction == -1)
            break;
        if(instruction == 1)
        {
            int num;
            scanf("%d",&num);

            if( (rear+1)%n == front )
                printf("FULL\n");
            else
                enqueue(cirQueue, n, &front, &rear, num);
        }

        if(instruction == 0)
        {
            if( rear == front )
                printf("EMPTY\n");
            else
                printf("%d\n",dequeue(cirQueue, n, &front, &rear));
        }
    }

    free(cirQueue);

    return 0;
}

void enqueue(int *cirQueue, int n, int *front, int *rear, int num)
{
    cirQueue[ (*rear+1)%n ] = num;
    (*rear)++;
}

int dequeue(int *cirQueue, int n, int *front, int *rear)
{
    int tmp;
    tmp = cirQueue[ (*front+1)%n ];
    (*front)++;
    return tmp;
}
