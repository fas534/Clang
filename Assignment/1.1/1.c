/* Project Name   - 1.c */
/* Created On     - 07/10/21, 12:02:58 AM */
/* Author Name    - MD. Fahim Abrar Saikat */
/* Author E-mail  - saikat.cucse.52@gmail.com */
/* Author Github  - https://github.com/FA-Saikat */

#include <stdio.h>

struct Node {
    int value;
    struct Node *next;
};

int main()
{
    struct Node head;
    struct Node a;
    struct Node b;
    struct Node c;

    a.value = 42;
    a.next  = &b;
    head    = a;

    b.value = 34;
    b.next  = &c;

    c.value = 27;
    c.next  = NULL;

    printf("Variable Address - Value - Next Variable Address\n");
    printf("%d       %d      %d\n", &a, a.value, a.next);
    printf("%d       %d      %d\n", &b, b.value, b.next);
    printf("%d       %d      %d\n", &c, c.value, c.next);

    return 0;
}
