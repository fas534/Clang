/* Project Name   - Undirected_graph.c */
/* Created On     - 07/13/21, 10:49:29 PM */
/* Author Name    - MD. Fahim Abrar Saikat */
/* Author E-mail  - saikat.cucse.52@gmail.com */
/* Author Github  - https://github.com/FA-Saikat */


#include <stdio.h>

struct Edge {
    int start;
    int end;
};


void input(int arr[10][10], int vertex, struct Edge edge[100]);
void print(int arr[10][10], int vertex);
void assign(int arr[10][10], int vertex);
/* void input(int arr[10][10], int vertex); */
void edgeList(int arr[10][10], int vertex);
void adjList(int arr[10][10], int vertex);
int incidence(int arr[10][10], int vertex, int start, int end);
void print_edge_list(struct Edge edge[], int num_edge);
void print_incidence_matrix(int arr[10][10], int vertex, struct Edge edge[], int num_edge);

int main()
{
    int row, col;
    int graph[10][10];
    int vertex = 8;
    struct Edge edge[100];

    assign(graph, 10);
    print(graph, vertex);

    input(graph, 11, edge);
    printf("After inserting:\n");
    print(graph, vertex);

    edgeList(graph, vertex);
    print(graph, vertex);

    adjList(graph, vertex);
    print(graph, vertex);

    incidence(graph, vertex, 0, 0) ?  printf("Adjacent\n") : printf("Not Adjacent\n");
    print_edge_list(edge, 11);
    printf("Incidence Matrix: \n");
    print_incidence_matrix(graph, vertex, edge, 11);

    return 0;
}


void assign(int arr[10][10], int vertex)
{
    int i, j;

    for (i = 0; i < vertex; i++) {
        for (j = 0; j < vertex; j++) {
            arr[i][j] = 0;
        }
    }
}


void print(int arr[10][10], int vertex)
{
    int i, j;

    for (i = 0; i < vertex; i++) {
        for (j = 0; j < vertex; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}


void input(int arr[10][10], int vertex, struct Edge edge[100])
{
    int i;
    int row, col;

    for (i = 0; i < vertex; i++) {
        scanf("%d %d", &row, &col);
        arr[row][col] = 1;
        arr[col][row] = 1;

        /* Stroring Edges */
        edge[i].start = row;
        edge[i].end = col;

    }
}


void edgeList(int arr[10][10], int vertex)
{
    int i, j;

    for (i = 0; i < vertex; i++) {
        for (j = 0; j < vertex; j++) {
            if (arr[i][j] == 1)
            printf("%d %d\n", i, j);
        }
    }
}


void adjList(int arr[10][10], int vertex)
{
    int i, j;

    for (i = 0; i < vertex; i++) {
        printf("%d => ", i);
        for (j = 0; j < vertex; j++) {
            if (arr[i][j] == 1)
            printf("%d ", j);
        }
        printf("\n");
    }
}


int incidence(int arr[10][10], int vertex, int start, int end)
{
    return arr[start][end];
}


void print_incidence_matrix(int arr[10][10], int vertex, struct Edge edge[], int num_edge)
{
    int node, i, j;

    for (node = 0; node < vertex; node++) {
        printf("%d: ", node);
        for (i = 0; i < num_edge; i++) {
            if (node == edge[i].start || node == edge[i].end) {
                printf("1 ");
            }
            else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}


void print_edge_list(struct Edge edge[], int num_edge)
{
    int i;
    for (i = 0; i < num_edge; i++) {
        printf("%d %d\n", edge[i].start, edge[i].end);
    }
}
