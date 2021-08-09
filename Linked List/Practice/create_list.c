/* Project Name   - createList.c */
/* Created On     - 07/08/21, 05:20:33 PM */
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

void print(node *);
node* create(int);

int main()
{
    int num;
    node *head = NULL;

    printf("Enter the number of nodes: ");
    scanf("%d", &num);

    head = create(num);
    print(head);
    return 0;
}

node* create(int num)
{
    int data;
    node *head = NULL;
    node *newNode = NULL;
    node *temp = (node *) malloc(sizeof(node));

    printf("Enter value: ");
    scanf("%d", &data);

    temp->value = data;
    temp->next = NULL;
    head = temp;

    while (--num) {
        newNode = (node *) malloc(sizeof(node));

        scanf("%d", &data);
        newNode->value = data;
        newNode->next = NULL;

        temp->next = newNode;
        temp = temp->next;
    }

    return head;
}

void print(node *temp)
{
    printf("List: ");

    while (temp) {
        printf("%d ", temp->value);
        temp = temp->next;
    }

    printf("\n");
}
