/* Design a Priority Queue Data Structure. (First Element, Minimum)
    -Empty
    -Size
    -Top
    -Push
    -Pop
    -Display
*/

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
node*   push(node *, int);
node*   pop(node *);
void    display(node *);

int main()
{
    int val, pri, key = 69;
    int num_node;
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
            node *newnode   = head;

            while (newnode->next && newnode->next->priority < temp->priority) {
                newnode     = newnode->next;
            }

            temp->next  = newnode->next;
            newnode->next   = temp;
        }
    }

    empty(head) ? printf("Queue is not Empty!\n") : printf("Queue is Empty!\n");

    display(head);

    printf("Size  : %d\n", size(head));

    printf("Top   : %d\n", top(head));

    head = push(head, key);
    display(head);

    head = pop(head);
    display(head);

    return 0;
}

int empty(node *temp)
{
    if (temp == NULL)
        return 0;
    else
        return 1;
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
        node *newhead   = temp;
        newhead->value  = key;
        return newhead;
    }
}

/* node* push(node *temp, int key) */
/* { */
/*     node *newhead = (node *) malloc(sizeof(node)); */
/*     newhead->value = key; */
/*     newhead->next  = temp; */
/*     return newhead; */
/* } */

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


