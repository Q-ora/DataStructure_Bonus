#include <stdio.h>
#include <stdlib.h>

typedef struct edge{
    int id1,id2;
    int weight;
    int mark;
}Edge;

Edge a[101][101];


int cmp(const void *a, const void *b);
int have_cycle(Edge **edge, int n, int current_num_of_tree_edge, int m);
int find_MST(Edge **edge, int n);

int main()
{
    int k, count=0;
    Edge *sorted_edge[100101];

    scanf("%d",&k);
    for(int i=0;i<k+1;i++)
        for(int j=0;j<k+1;j++){
            scanf("%d",&a[i][j].weight);
            a[i][j].id1 = i;
            a[i][j].id2 = j;
            a[i][j].mark = 0;

            if(i>j)  //只存 id1>id2 的edge
                sorted_edge[count++] = &a[i][j];
        }


    qsort(sorted_edge,count,sizeof(Edge*),cmp);

    //for(int i=0;i<count;i++)
        //printf("edge[%d]: weight = %d\n",i,sorted_edge[i]->weight);

    int total_cost = find_MST((Edge**)sorted_edge, count);

    printf("%d\n",total_cost);



    return 0;
}

int cmp(const void *a, const void *b)
{
    Edge **A = (Edge**)a;
    Edge **B = (Edge**)b;

    return (*A)->weight - (*B)->weight;
}

int have_cycle(Edge **edge, int n, int current_num_of_tree_edge, int m)  //邊數=點數
{
    int i;
    int node[101]={0};

    //紀錄第m個邊兩端連接的node
    node[ (*(edge+m))->id1 ] = 1;
    node[ (*(edge+m))->id2 ] = 1;

    for(i=0; i<n; i++)        //檢查所有邊
    {
        if( (*(edge+i))->mark ) //已經被選到的邊
        {
            //紀錄出現在tree裡的node
            node[ (*(edge+i))->id1 ] = 1;
            node[ (*(edge+i))->id2 ] = 1;
        }
    }

    int node_count=0;
    for(i=0;i<101;i++)
        if( node[i] )
            node_count++;

    if(node_count==current_num_of_tree_edge+1)
        return 1;
    else
        return 0;
}

int find_MST(Edge **edge, int n)
{
    int i, current_num_of_tree_edge=1;
    int total_cost=0;

    (*(edge+0))->mark = 1;  //最小的邊一定在裡面
    total_cost += (*(edge+0))->weight;
    //printf("edge[0] be selected\n");

    for(i=1;i<n;i++)        //檢查1~n-1的邊
    {
        if( !have_cycle((Edge**)edge, n, current_num_of_tree_edge, i) )  //如果加入第i個edge不會造成cycle
        {
            (*(edge+i))->mark = 1;          //標記為已選
            current_num_of_tree_edge++;     //tree_edge++
            total_cost += (*(edge+i))->weight;
            //printf("edge[%d] be selected\n", i);
        }
    }

    return total_cost;
}
