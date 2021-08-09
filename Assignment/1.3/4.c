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
    int n;
    scanf("%d", &n);

    node *head = NULL;

    head       = create();
    print(head);

    head       = delete_pos(head, n);

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


int size(node *temp){
    int count = 0;
    while (temp) {
        count++;
        temp = temp->next;
    }
    return count;
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
        printf("List Underflow!\n");
        return temp;
    }

    if (pos <= 0 || pos > size(temp)) {
        printf("Index out of range!\n");
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
