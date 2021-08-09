#include <stdio.h>
#include <stdlib.h>

typedef struct Queue node;
struct Queue {
    int     value;
    int     priority;
    node    *next;
};

int     empty(node *);
int     size(node *);
int     top(node *);
node*   push(node *, int, int);
node*   pop(node *);
void    display(node *);

int main()
{
    node *head = NULL;

//    empty(head) ? printf("Queue is Empty!\n") : printf("Queue is not Empty!\n");

    head = push(head, 10, 3);
    head = push(head, 20, 1);
    head = push(head, 30, 2);
    head = push(head, 40, 5);
    head = push(head, 50, 4);

//    empty(head) ? printf("Queue is Empty!\n") : printf("Queue is not Empty!\n");

//    display(head);

//    printf("Size  : %d\n", size(head));

//    printf("Top   : %d\n", top(head));

    head = pop(head);
    display(head);

    return 0;
}

int empty(node *temp)
{
    if (temp == NULL)
        return 1;
    else
        return 0;
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

node* pop(node *temp)
{
    if (temp == NULL) {
        printf("Queue Underflow!\n");
        return NULL;
    }
    else {
        node *newhead = temp;
        newhead       = temp->next;
        free(temp);
        return newhead;
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

node* push(node *head, int val, int pri)
{
        node *temp      = (node *) malloc(sizeof(node));

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
            node *newnode   = head;

            while (newnode->next && newnode->next->priority < temp->priority) {
                newnode     = newnode->next;
            }

            temp->next  = newnode->next;
            newnode->next   = temp;
        }
        return head;
}
