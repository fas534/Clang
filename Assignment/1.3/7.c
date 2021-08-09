#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;
struct Node {
    int value;
    node *next;
};

void print(node *temp);
node* delete_first(node *);
node* delete_last(node *);
node* delete_pos(node *, int);
node* delete_value(node *, int);
node* delete_after_pos(node *, int);
node* clear_list(node *);
node* create();

int main()
{
    int pos = 2;
    int key = 66;
    node *head = NULL;

    head       = create();
    print(head);

    head = clear_list(head);
    print(head);

    return 0;
}



node* create()
{
    node *head = NULL;

    node *temp  = (node *) malloc(sizeof(node));
    temp->value = 11;
    temp->next  = NULL;
    head        = temp;

    temp->next  = (node *) malloc(sizeof(node));
    temp        = temp->next;
    temp->value = 22;
    temp->next  = NULL;

    temp->next  = (node *) malloc(sizeof(node));
    temp        = temp->next;
    temp->value = 33;
    temp->next  = NULL;

    temp->next  = (node *) malloc(sizeof(node));
    temp        = temp->next;
    temp->value = 44;
    temp->next  = NULL;

    temp->next  = (node *) malloc(sizeof(node));
    temp        = temp->next;
    temp->value = 55;
    temp->next  = NULL;

    temp->next  = (node *) malloc(sizeof(node));
    temp        = temp->next;
    temp->value = 66;
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




node* clear_list(node *head)
{
    node *clear = head;
    while (head) {
        clear   = head;
        head    = head->next;
        free(clear);
    }
    return NULL;
}
