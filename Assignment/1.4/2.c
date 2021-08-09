/* Project Name   - 2.c */
/* Created On     - 07/31/21, 10:14:33 AM */
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

node* create();
void print(node *);
node* begin(node *, int);
node* insert_back(node *, int);

int main()
{
    int key = 69;
    int pos = 4;
    node *head = NULL;
    head = create();

    print(head);
    head = insert_back(head, key);
    print(head);

    return 0;
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

node* begin(node *temp, int key)
{
    node *newhead = (node *) malloc(sizeof(node));
    newhead->value = key;
    newhead->next  = temp;
    return newhead;
}
node* insert_back(node *temp, int key)
{
    if (temp == NULL) {
        return begin(temp, key);
    }

    node *newnode= (node *) malloc(sizeof(node));
    newnode->value = key;
    newnode->next  = NULL;

    node *newhead = temp;
    while (newhead->next) {
        newhead = newhead->next;
    }
    newhead->next = newnode;

    return temp;
}
