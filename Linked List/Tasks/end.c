/* Project Name   - end.c */
/* Created On     - 07/05/21, 05:46:11 PM */
/* Author Name    - MD. Fahim Abrar Saikat */
/* Author E-mail  - saikat.cucse.52@gmail.com */
/* Author Github  - https://github.com/FA-Saikat */

#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;
struct Node{
    int     value;
    node    *next;
};

void    print_list(node *temp);
node*   end(node *);
node*   create_list();


int main()
{
    node *head = NULL;

    head = create_list();
    print_list(head);

    printf("End: %d\n", end(head));

    return 0;
}

node*
create_list()
{
    node *head = NULL;
    node *temp;

    temp = (node *) malloc(sizeof(node));
    temp->value = 69;    temp->next = NULL;
    head = temp;

    temp->next = (node *) malloc(sizeof(node));
    temp = temp->next;
    temp->value = 2;    temp->next = NULL;

    temp->next = (node *) malloc(sizeof(node));
    temp = temp->next;
    temp->value = 3;    temp->next = NULL;

    temp->next = (node *) malloc(sizeof(node));
    temp = temp->next;
    temp->value = 420;    temp->next = NULL;

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

node*
end(node *temp)
{
    while (temp->next != NULL) {
        temp = temp->next;
    }
    return temp;
}


