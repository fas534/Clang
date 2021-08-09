
#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;

struct Node{
    int     value;
    node    *next;
};

void    print_list(node *);
int     search(node *, int);
node*   create_list();


int main()
{
    node *head = NULL;

    head = create_list();
    print_list(head);
    int found = search(head, 69);
    if (found != 0)
        printf("Not Found!\n");
    else
        printf("Found!\n");

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
    temp->value = 2;      temp->next = NULL;

    temp->next = (node *) malloc(sizeof(node));
    temp = temp->next;
    temp->value = 69;     temp->next = NULL;

    temp->next = (node *) malloc(sizeof(node));
    temp = temp->next;
    temp->value = 4;      temp->next = NULL;

    return head;
}

node* search(node *temp, int key)
{
    while (temp){
        if (temp->value == key) {
            return temp;
        } else
        temp = temp->next;
    }
    return -1;
}

int search_position(node *temp, int key)
{
    int pos = 1;
    int count = 0;
    while (temp){
        if (temp->value == key) {
            count++;
        }
        temp = temp->next;
    }
    return count;
}


void print_list(node *temp)
{
    printf("%d\n", temp);
    while (temp) {
        printf("MA: %d\tValue: %d\tNext: %d\n", temp, temp->value, temp->next);
        temp = temp->next;
    }
}


