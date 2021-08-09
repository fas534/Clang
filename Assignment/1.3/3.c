#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;
struct Node {
    int value;
    node *next;
};

node* create_list();
node* delete_first(node *temp);
node* delete_value(node *temp, int key);
void print(node *);

int main()
{
    int key;
    scanf("%d", &key);
    node *head = NULL;
    head       = create_list();

    print(head);
    head = delete_value(head, key);
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

node* delete_first(node *temp)
{
    node *new = temp;
    new       = temp->next;
    free(temp);
    return new;
}


node* delete_value(node *temp, int key)
{
    if(temp == NULL) {
        printf("List Underflow!\n");
        return temp;
    }

    if (temp->value == key) {
        return delete_first(temp);
    }

    node *head = temp;
    node *prev = NULL;
    while (temp) {
        prev = temp;
        temp = temp->next;
        if (temp->value == key) {
            prev->next = temp->next;
            free(temp);
            return head;
        }
        else {
            printf("\rNot Found!\n");
            return head;
        }
    }
    return head;
}
