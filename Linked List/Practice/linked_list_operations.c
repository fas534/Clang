/* Project Name   - linked_list_operations.c */
/* Created On     - 07/10/21, 08:18:31 AM */
/* Author Name    - MD. Fahim Abrar Saikat */
/* Author E-mail  - saikat.cucse.52@gmail.com */
/* Author Github  - https://github.com/FA-Saikat */

#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;
struct Node {
    int node_value;
    node *next_address;
};

void            print_list(node *);

int             is_empty(node *);
int             first_value(node *);
int             last_value(node *);
int             size(node *temp);
int             value_at(node *, int);

node*           create_list();
node*           begin(node *temp);
node*           end(node *temp);
node*           address_at(node *, int);
node*           search_address(node*, int);

int main()
{
    int pos = 5;
    int key = 50;
    node *head = NULL;
    head       = create_list(head);

    is_empty(head) ? printf("List is not Empty!\n") : printf("List is Empty!\n");
    print_list(head);

    printf("First value : %d\n", first_value(head));
    printf("Last value  : %d\n", last_value(head));

    printf("Beginning address : %u\n", begin(head));
    printf("Ending address    : %u\n", end(head));
    printf("Size of the list  : %d\n", size(head));
    printf("Value at %d       : %d\n", pos, value_at(head, pos));
    printf("Address at %d     : %u\n", pos, address_at(head, pos));
    printf("Address at %d     : %u\n", key, search_address(head, key));

    return 0;
}


void print_list(node *temp)
{
    if (temp == NULL) {
        printf("List is Empty!\n");
    }
    printf("Linked List : ");
    while (temp) {
        printf("%d ", temp->node_value);
        temp = temp->next_address;
    }
    printf("\n");
}


int is_empty(node *temp)
{
    while (temp) {
        return 1;
    }
    return 0;
}


int first_value(node *temp)
{
    if (temp == NULL) {
        printf("List is Empty!\n");
        return 0;
    }
    return temp->node_value;
}


int last_value(node *temp)
{
    node *prev;
    if (temp == NULL) {
        printf("List is Empty!\n");
        return 0;
    }
    while (temp) {
        prev = temp;
        temp = temp->next_address;
    }
    return prev->node_value;
}


int value_at(node *temp, int pos)
{
    if (pos <= 0 || pos > size(temp)) {
        return -1;
    }
    int count = 1;
    while (temp) {
        if (count == pos) {
            return temp->node_value;
        }
        temp = temp->next_address;
        count++;
    }
    return -1;
}


node* create_list()
{
    node *head = NULL;

    node *temp = (node *) malloc(sizeof(node));
    temp->node_value    = 10;
    temp->next_address  = NULL;
    head                = temp;

    temp->next_address  = (node *) malloc(sizeof(node));
    temp                = temp->next_address;
    temp->node_value    = 20;
    temp->next_address  = NULL;

    temp->next_address  = (node *) malloc(sizeof(node));
    temp                = temp->next_address;
    temp->node_value    = 30;
    temp->next_address  = NULL;

    temp->next_address  = (node *) malloc(sizeof(node));
    temp                = temp->next_address;
    temp->node_value    = 40;
    temp->next_address  = NULL;

    temp->next_address  = (node *) malloc(sizeof(node));
    temp                = temp->next_address;
    temp->node_value    = 50;
    temp->next_address  = NULL;

    return head;
}


node* begin(node *temp)
{
    if (temp == NULL) {
        printf("List is Empty!\n");
        return 0;
    }
    return temp;
}


node* end(node *temp)
{
    node *prev;
    if (temp == NULL) {
        printf("List is Empty!\n");
        return 0;
    }
    while (temp) {
        prev = temp;
        temp = temp->next_address;
    }
    return prev;
}


int size(node *temp)
{
    int count = 0;
    while (temp) {
        count++;
        temp = temp->next_address;
    }
    return count;
}


node* address_at(node *temp, int pos)
{
    int count = 1;
    if (pos <= 0 || pos > size(temp)) {
        return NULL;
    }
    while (temp) {
        if (count == pos) {
            return temp;
        }
        temp = temp->next_address;
        count++;
    }
    return NULL;
}

node* search_address(node *temp, int key)
{
    node *prev;
    if (temp == NULL) {
        printf("List is Empty!\n");
        return NULL;
    }
    while (temp) {
        if (temp->node_value == key) {
            return prev->next_address;
        }
        prev = temp;
        temp = temp->next_address;
    }
    return NULL;
}
