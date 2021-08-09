#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;
struct Node {
    int value;
    node *next;
};

node* create_list();
node* delete_back(node *);
void print(node *);

int main()
{

    node *head = NULL;
    head       = create_list();

    print(head);
    head = delete_back(head);
    print(head);


    return 0;
}


node* create_list()
{
    node *head = NULL;

    node *temp = (node *) malloc(sizeof(node));
    temp->value    = 10;
    temp->next  = NULL;
    head                = temp;

    temp->next  = (node *) malloc(sizeof(node));
    temp                = temp->next;
    temp->value    = 20;
    temp->next  = NULL;

    temp->next  = (node *) malloc(sizeof(node));
    temp                = temp->next;
    temp->value    = 30;
    temp->next  = NULL;

    temp->next  = (node *) malloc(sizeof(node));
    temp                = temp->next;
    temp->value    = 40;
    temp->next  = NULL;

    temp->next  = (node *) malloc(sizeof(node));
    temp                = temp->next;
    temp->value    = 50;
    temp->next  = NULL;

    return head;
}

void print(node *temp)
{
    if(temp == NULL) {
        printf("List is Empty!\n");
        return;
    }

    printf("List : ");
    while (temp) {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}


node* delete_back(node *temp)
{
    node *newhead  = temp;
    node *prev = NULL;

    if (temp == NULL) {
        printf("List Underflow!\n");
        return temp;
    }

    if (temp->next == NULL) {
        free(temp);
        return NULL;
    }

    while (temp->next) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    free(temp);

    return newhead;
}
