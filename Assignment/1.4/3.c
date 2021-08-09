/* Project Name   - 3.c */
/* Created On     - 07/31/21, 10:30:07 AM */
/* Author Name    - MD. Fahim Abrar Saikinsert_at */
/* Author E-mail  - saikinsert_at.cucse.52@gmail.com */
/* Author Github  - https://github.com/FA-Saikinsert_at */


#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;
struct Node {
    int value;
    node *next;
};

node* create();
int size(node *);
void print(node *);
node* begin(node *, int);
node* insert_back(node *, int);
node* insert_at(node *, int, int);

int main()
{
    int key;
    scanf("%d", &key);
    int n;
    scanf("%d", &n);
    node *head = NULL;
    head = create();

    print(head);
    head = insert_at(head, n, key);
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
    if(temp == NULL) {
        printf("Empty!\n");
        return;
    }
    printf("List: ");
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

node* begin(node *temp, int key)
{
    node *newhead = (node *) malloc(sizeof(node));
    newhead->value = key;
    newhead->next  = temp;
    return newhead;
}
node* insert_back(node *temp, int key)
{
    if (temp == NULL) {
        return begin(temp, key);
    }

    node *newnode= (node *) malloc(sizeof(node));
    newnode->value = key;
    newnode->next  = NULL;

    node *newhead = temp;
    while (newhead->next) {
        newhead = newhead->next;
    }
    newhead->next = newnode;

    return temp;
}

node* insert_at(node *temp, int n, int key)
{
    /* if(n == 1 || n == size(temp)+1) { */
    /*     return end(temp, key); */
    /* } */

    if(n == 1) {
        return begin(temp, key);
    }

    if(n <= 0 || n > size(temp)+1) {
        printf("Invalid nition!\n");
        return temp;
    }

    int flag = 1;
    node *temphead  = temp;
    node *prev = NULL;
    node *newnode   = (node *) malloc(sizeof(node));
    newnode->value  = key;
    newnode->next  = NULL;

    while (temphead) {
        flag++;
        if (flag == n) {
            prev = temphead->next;
            temphead->next = newnode;
            newnode->next = prev;
        }
        temphead = temphead->next;
    }
    return temp;
}
