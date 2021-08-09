/* Project Name   - Mid_Lab.c */
/* Created On     - 07/16/21, 10:44:03 AM */
/* Author Name    - MD. Fahim Abrar Saikat */
/* Author E-mail  - saikat.cucse.52@gmail.com */
/* Author Github  - https://github.com/FA-Saikat */


#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;
struct Node {
    int     value;
    int     priority;
    node    *next;
};

int     empty(node *);
int     size(node *);
int     top(node *);
node*   push(node *, int);
node*   pop(node *);
void    display(node *);

int main()
{
    int num_node, val, pri;
    int key = 69;

    node *head = NULL;

    scanf("%d", &num_node);
    while (num_node--) {
        node *temp      = (node *) malloc(sizeof(node));
        scanf("%d %d", &val, &pri);

        temp->value     = val;
        temp->priority  = pri;
        temp->next      = NULL;

        if (head == NULL) {
            head = temp;
        }
        else if (temp->priority < head->priority) {
            temp->next  = head;
            head        = temp;
        }
        else {
            node *new   = head;
            while (new->next && new->next->priority < temp->priority) {
                new     = new->next;
            }

            temp->next = new->next;
            new->next   = temp;
        }
    }

    empty(head);

    printf("Size : %d\n", size(head));

    printf("Top  : %d\n", top(head));

    head = push(head, key);
    display(head);

    head = pop(head);
    display(head);

    return 0;
}

int empty(node *temp)
{
    if (temp == NULL)
        printf("Empty\n");

    else
        printf("Not Empty\n");
}

int size(node *temp)
{
    int count = 0;
    while (temp) {
        count++;
        temp = temp->next;
    }
    return count;
}

int top(node *temp)
{
    if (temp == NULL) {
        return 0;
    }
    else {
        return temp->value;
    }
}

node* push(node *temp, int key)
{
    if (temp == NULL) {
        return NULL;
    }
    else {
        node *newhead = temp;
        newhead->value = key;

        return newhead;
    }
}

node* pop(node *temp)
{
    if (temp == NULL) {
        printf("Queue Underflow!\n");
        return NULL;
    }
    else {
        node *new = temp;
        new       = temp->next;
        free(temp);
        return new;
    }
}

void display(node *temp)
{
    if (temp == NULL) {
        printf("Queue is Empty!\n");
        return;
    }

    printf("Queue : ");
    while (temp) {
        printf("%d ", temp->value);
        temp        = temp->next;
    }
    printf("\n");
}




