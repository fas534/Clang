/* Project Name   - print_at.c */
/* Created On     - 07/05/21, 05:52:02 PM */
/* Author Name    - MD. Fahim Abrar Saikat */
/* Author E-mail  - saikat.cucse.52@gmail.com */
/* Author Github  - https://github.com/FA-Saikat */

#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;
struct Node{
    int     value;
    node    *next;
};

int     print_list(node *, int);
node*   create_list();


int main()
{
    node *head = NULL;

    head = create_list();
    printf("Value At: %d\n", print_list(head, 500));

    return 0;
}

node
*create_list()
{
    node *head = NULL;
    node *temp;

    temp = (node *) malloc(sizeof(node));
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

int print_list(node *temp, int pos)
{
    while (--pos) {
        temp = temp->next;
    }
    return temp->value;
}


