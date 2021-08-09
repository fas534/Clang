

#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;
struct Node{
    int     value;
    node    *next;
};

void    print_list(node *temp);
int     size(node *);
node*   create_list();


int main()
{
    node *head = NULL;

    head = create_list();
    print_list(head);

    printf("Size: %d\n", size(head));

    return 0;
}

node*
create_list()
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
    temp->value = 3;    temp->next = NULL;

    temp->next = (node *) malloc(sizeof(node));
    temp = temp->next;
    temp->value = 4;    temp->next = NULL;

    /*
    temp->next = (node *) malloc(sizeof(node));
    temp = temp->next;
    temp->value = 3;    temp->next = NULL;

    temp->next = (node *) malloc(sizeof(node));
    temp = temp->next;
    temp->value = 4;    temp->next = NULL;
    */

    return head;
}

void
print_list(node *temp)
{
    printf("%d\n", temp);
    while (temp) {
        printf("MA: %d\tValue: %d\tNext: %d\n", temp, temp->value, temp->next);
        temp = temp->next;
    }
}

int size(node *temp)
{
    int count = 0;
    while (temp) {
        temp = temp->next;
        count++;
    }
    return count;
}


