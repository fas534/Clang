/* Project Name   - min.c */
/* Created On     - 07/05/21, 06:46:59 PM */
/* Author Name    - MD. Fahim Abrar Saikat */
/* Author E-mail  - saikat.cucse.52@gmail.com */
/* Author Github  - https://github.com/FA-Saikat */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;
struct Node{
    int     value;
    node    *next;
};

void    print_list(node *);
int     min(node *);
node*   create_list();


int main()
{
    node *head = NULL;

    head = create_list();
    print_list(head);

    printf("Min: %d\n", min(head));
    return 0;
}

node*
create_list()
{
    node *head = NULL;
    node *temp;

    temp = (node *)     malloc(sizeof(node));
    temp->value = 1;    temp->next = NULL;
    head = temp;

    temp->next = (node *) malloc(sizeof(node));
    temp = temp->next;
    temp->value = 2;    temp->next = NULL;

    temp->next = (node *) malloc(sizeof(node));
    temp = temp->next;
    temp->value = 69;    temp->next = NULL;

    temp->next = (node *) malloc(sizeof(node));
    temp = temp->next;
    temp->value = 4;    temp->next = NULL;

    return head;
}

int
min(node *temp)
{
    int min = INT_MAX;
    while (temp){
        if (temp->value < min)
            min = temp->value;
        else
            temp = temp->next;
    }
    return min;
}

void
print_list(node *temp)
{
    printf("%d\n", temp);
    while (temp) {
        printf("MA: %d\tValue: %d\tNext: %d\n", temp, temp->value, temp->next);
        temp = temp->next;
    }
}
