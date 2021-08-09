/* Project Name   - 1.c */
/* Created On     - 07/31/21, 10:05:36 AM */
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

int size(node *);
void print(node *);
int empty(node *);
node* create();

node* insert_front(node *, int);

int main()
{
    int key = 69;
    node *head = NULL;
    head = create();

    head = insert_front(head, key);
    print(head);

    return 0;
}

void print(node *temp)
{
    if(temp == NULL) {
        printf("Empty!\n");
        return;
    }
    printf("List: ");
    while (temp) {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}

node* insert_front(node *temp, int key)
{
    node *newhead = (node *) malloc(sizeof(node));
    newhead->value = key;
    newhead->next  = temp;
    return newhead;
}

node* create()
{
    node *head = NULL;

    node *temp  = (node *) malloc(sizeof(node));
    temp->value = 1;
    temp->next  = NULL;
    head        = temp;

    temp->next  = (node *) malloc(sizeof(node));
    temp        = temp->next;
    temp->value = 7 ;
    temp->next  = NULL;

    temp->next  = (node *) malloc(sizeof(node));
    temp        = temp->next;
    temp->value = 4 ;
    temp->next  = NULL;

    temp->next  = (node *) malloc(sizeof(node));
    temp        = temp->next;
    temp->value = 6 ;
    temp->next  = NULL;

    temp->next  = (node *) malloc(sizeof(node));
    temp        = temp->next;
    temp->value = 4 ;
    temp->next  = NULL;

    temp->next  = (node *) malloc(sizeof(node));
    temp        = temp->next;
    temp->value = 5 ;
    temp->next  = NULL;

    return head;
}

