/* Project Name   - 12.c */
/* Created On     - 07/30/21, 05:44:38 PM */
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

node* Create(node *head, int data);
void print(node *temp);
node* copy(node *head);

int main()
{
    node *head = NULL;
    node *anotherHead = NULL;
    head = Create(head, 1);
    head = Create(head, 3);
    head = Create(head, 5);
    head = Create(head, 7);

    print(head);

    anotherHead = copy(head);

    print(anotherHead);

    return 0;
}

node* Create(node* head, int data)
{
    node *temp  = (node *) malloc(sizeof(node));
    temp->value = data;
    temp->next   = NULL;

    if (head == NULL) {
        head = temp;
    }
    else {
        node *newnode   = head;
            while (newnode->next) {
                newnode     = newnode->next;
            }
            newnode->next   = temp;
    }

    return head;
}

void print(node *temp)
{
    if (!temp) {
        printf("Linked List is Empty!\n");
        return;
    }

    while(temp) {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}


node* copy(node *temp)
{
    if (!temp) {
        return NULL;
    }

    node *newHead   = (node *) malloc(sizeof(node));
    newHead->value  = temp->value;
    newHead->next   = copy(temp->next);

    return newHead;
}
