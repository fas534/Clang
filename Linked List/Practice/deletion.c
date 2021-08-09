/* Project Name   - deletion.c */
/* Created On     - 07/10/21, 04:40:35 PM */
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
    /* head       = delete_first(head); */
    /* print(head); */
    /* head       = delete_pos(head, pos); */
    /* print(head); */
    /* head       = delete_value(head, key); */
    /* print(head); */
    /* head = delete_last(head); */
    /* print(head); */
    /* head = delete_after_pos(head, pos); */
    /* print(head); */
    head = clear_list(head);
    print(head);

    return 0;
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


int size(node *temp){
    int count = 0;
    while (temp) {
        count++;
        temp = temp->next;
    }
    return count;
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


node* delete_first(node *temp)
{
    node *new = temp;
    new       = temp->next;
    free(temp);
    return new;
}


node* delete_pos(node *temp, int pos)
{
    if(temp == NULL) {
        printf("List is Empty!\n");
        return temp;
    }

    if (pos <= 0 || pos > size(temp)) {
        printf("Invalid position!\n");
        return temp;
    }

    if (pos == 1) {
        return delete_first(temp);
    }

    int count  = 0;
    node *head = temp;
    node *prev = NULL;

    while (temp) {
        count++;
        if (count == pos) {
            prev->next = temp->next;
            free(temp);
            return head;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}


node* delete_value(node *temp, int key)
{
    if(temp == NULL) {
        printf("List is Empty!\n");
        return temp;
    }

    if (temp->value == key) {
        return delete_first(temp);
    }

    node *head = temp;
    node *prev = NULL;
    while (temp) {
        if (temp->value == key) {
            prev->next = temp->next;
            free(temp);
            return head;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}


node* delete_last(node *temp)
{
    node *newhead  = temp;
    node *prev = NULL;

    if (temp == NULL) {
        printf("List is Empty!\n");
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

node* delete_after_pos(node *temp, int pos)
{
    if(temp == NULL) {
        printf("List is Empty!\n");
        return temp;
    }

    if (pos <= 0 || pos >= size(temp)) {
        printf("Invalid position!\n");
        return temp;
    }

    int count  = 0;
    node *head = temp;
    node *prev = NULL;

    while (temp) {
        count++;
        if (count-1 == pos) {
            prev->next = temp->next;
            free(temp);
            return head;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

