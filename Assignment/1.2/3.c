/* Project Name   - 3.c */
/* Created On     - 07/27/21, 04:36:22 PM */
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
int empty(node *temp);
int size(node *temp);

int main()
{
    node *head = NULL;
    head = Create(head, 1);
    head = Create(head, 3);
    head = Create(head, 5);
    head = Create(head, 7);

    print(head);

    empty(head) ? printf("Linked List is Empty!\n") : printf("Linked List is not Empty!\n");

    printf("Size : %d\n", size(head));

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
    while(temp) {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}

int empty(node *temp)
{
    if (temp == NULL) {
        return 1;
    }
    return 0;
}

int size(node *temp)
{
    int count = 0;
    while(temp) {
        count++;
        temp  = temp->next;
    }
    return count;
}
