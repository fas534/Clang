/* Project Name   - 4.c */
/* Created On     - 07/10/21, 12:39:06 AM */
/* Author Name    - MD. Fahim Abrar Saikat */
/* Author E-mail  - saikat.cucse.52@gmail.com */
/* Author Github  - https://github.com/FA-Saikat */

#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;
struct Node {
    int value;
    node *next;
};

void display(node *);

int main()
{
    node *head = NULL;

    node *temp      = (node *) malloc(sizeof(node));
    temp -> value   = 42;
    temp -> next    = NULL;
    head = temp;

    temp -> next    = (node *) malloc(sizeof(node));
    temp = temp -> next;
    temp -> value   = 34;
    temp -> next    = NULL;

    temp -> next    = (node *) malloc(sizeof(node));
    temp = temp -> next;
    temp -> value   = 27;
    temp -> next    = NULL;

    display(head);
    return 0;
}

void display(node *temp)
{
    if (temp == NULL)
        printf("Linked List is Empty!\n");
    while (temp)
    {
        printf("%d ", temp -> value);
        temp = temp -> next;
    }
    printf("\n");
}
