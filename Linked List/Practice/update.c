/* Project Name   - update.c */
/* Created On     - 07/11/21, 11:10:26 PM */
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
node* create();
node* update(node *temp, int pos, int key);
node* update_before(node *temp, int pos, int key);
node* update_after(node *temp, int pos, int key);

int main()
{
    node *head = NULL;

    head = create();
    print(head);

    update(head, 2, 69);
    print(head);


//    update_before(head, 2, 69);
//    print(head);

    update_after(head, 2, 69);
    print(head);

    return 0;
}

node* create()
{
    node *head = NULL;

    node *temp  = (node *) malloc(sizeof(node));
    temp->value = 1;
    temp->next  = NULL;
    head        = temp;

    temp->next  = (node *) malloc(sizeof(node));
    temp        = temp->next;
    temp->value = 7 ;
    temp->next  = NULL;

    temp->next  = (node *) malloc(sizeof(node));
    temp        = temp->next;
    temp->value = 4 ;
    temp->next  = NULL;

    temp->next  = (node *) malloc(sizeof(node));
    temp        = temp->next;
    temp->value = 6 ;
    temp->next  = NULL;

    temp->next  = (node *) malloc(sizeof(node));
    temp        = temp->next;
    temp->value = 4 ;
    temp->next  = NULL;

    temp->next  = (node *) malloc(sizeof(node));
    temp        = temp->next;
    temp->value = 5 ;
    temp->next  = NULL;

    return head;
}

void print(node *temp)
{
    while (temp) {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}


int size(node *temp)
{
    int size = 0;
    while (temp) {
        size++;
        temp = temp->next;
    }
    return size;
}

node* update(node *temp, int pos, int key)
{
    int count = 1;

    if (pos <=0 || pos > size(temp))
        printf("invlid\n");

    while (temp) {

        if (count == pos) {
            temp->value = key;
            return temp;
        }
        count++;
        temp = temp->next;
    }
}

node* update_before(node *temp, int pos, int key)
{
    int count = 1;

    if (pos <=0 || pos > size(temp))
        printf("invlid\n");

    while (temp) {

        if (count == pos-1) {
            temp->value = key;
            return temp;
        }
        count++;
        temp = temp->next;
    }


}

node* update_after(node *temp, int pos, int key)
{
    int count = 1;

    if (pos <=0 || pos > size(temp))
        printf("invlid\n");

    while (temp) {

        if (count == pos+1) {
            temp->value = key;
            return temp;
        }
        count++;
        temp = temp->next;
    }
}

