/* @Author	: MD. Fahim Abrar Saikat */
/* @Mail	: saikat.cucse.52@gmail.com */
/* @ID		: 1935202534 */
/* @Date	: 07/01/21, 05:29:52 PM */


#include <stdio.h>

void print_graph(int [][10], int node);

int main()
{
    int node, edge;
    int graph[10][10];
    int i, j, s, e;

    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            graph[i][j] = 0;
        }
    }
    print_graph(graph, node = 5);

    printf("Enter node & edge: ");
    scanf("%d", &node);
    scanf("%d", &edge);

    for (i = 0; i < edge; i++){
        scanf("%d %d", &s , &e);
        graph[s][e] = 1;
        graph[e][s] = 1;
    }

    print_graph(graph, node = 5);

    return 0;
}

void print_graph(int graph[10][10], int node)
{
    int i, j;
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}
