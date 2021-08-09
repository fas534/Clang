/* Project Name   - 7.c */
/* Created On     - 07/27/21, 04:49:33 PM */
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
node* Create(node *head, int data);
int search(node *temp, int key);

int main()
{
    int key;
    scanf("%d", &key);
    node *head = NULL;
    head = Create(head, 1);
    head = Create(head, 3);
    head = Create(head, 5);
    head = Create(head, 7);

    search(head, key) ? printf("Found\n") : printf("Not Found\n");

    return 0;
}

node* Create(node* head, int data)
{
    node *temp  = (node *) malloc(sizeof(node));
    temp->value = data;
    temp->next   = NULL;

    if (head == NULL) {
        head = temp;
    }
    else {
        node *newnode   = head;
            while (newnode->next) {
                newnode     = newnode->next;
            }
            newnode->next   = temp;
    }

    return head;
}

int search(node *temp, int key)
{
    while(temp) {
        if (temp->value == key) {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}
