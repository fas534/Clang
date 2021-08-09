/* Project Name   - sample.c */
/* Created On     - 07/15/21, 08:13:51 AM */
/* Author Name    - MD. Fahim Abrar Saikat */
/* Author E-mail  - saikat.cucse.52@gmail.com */
/* Author Github  - https://github.com/FA-Saikat */


#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    int priority;
    struct node* next;
};

struct node* head = NULL;

// Function to push according to priority
void Enqueue(int dataValue, int priorityValue)
{
   struct node* newNode = NULL;
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = dataValue;
    newNode->priority = priorityValue;
    newNode->next = NULL;

    if(head == NULL)
    {
       head = newNode;
    }

    // Special Case: The head of list has lesser
    // priority than new node. So insert new
    // node before head node and change head node.
    else if (head->priority < newNode->priority)
    {
        // Insert New Node before head
        newNode->next = head;
        head = newNode;
    }
    else {
        // Traverse the list and find a
        // position to insert new node
        struct node* tmp = head;
        while (tmp->next != NULL && tmp->next->priority > newNode->priority) {
            tmp = tmp->next;
        }

        // Either at the ends of the list
        // or at required position
        newNode->next = tmp->next;
        tmp->next = newNode;
    }
}

void Dequeue()
{
    struct node* tmp = head;
    head = head->next;
    free(tmp);
}

// Return the value at head
int peek()
{
    return head->data;
}

// Driver code
int main()
{
    // Create a Priority Queue
    // 7->4->5->6
    Enqueue(5, 1);
    Enqueue(6, 0);
    Enqueue(4, 2);
    Enqueue(7, 3);

   while (head != NULL)
   {
        printf("%d ", peek());
        Dequeue();
    }
    return 0;
}
