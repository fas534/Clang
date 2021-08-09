/* Project Name   - insert.c */
/* Created On     - 07/04/21, 08:03:15 PM */
/* Author Name    - MD. Fahim Abrar Saikat */
/* Author E-mail  - saikat.cucse.52@gmail.com */
/* Author Github  - https://github.com/FA-Saikat */

#include <stdio.h>
#include <stdlib.h>

#define MAXSZ 10

void address_p  (int *, int);
void value_p    (int *, int);
void address_v  (int [], int);
void value_v    (int [], int);

int main()
{
    int a[MAXSZ] = {1, 2, 3, 4, 5}, size = 5;
    int *p = NULL;
    p = a;
    p = (int *) calloc(MAXSZ, sizeof(int));
    address_v(a, size);
    value_v(a, size);

    printf("Verify:\n");

    address_p(p, size);
    value_p(p, size);
    return 0;
}

void
value_v(int a[], int size)
{
    int i;

    printf("Array : ");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void
address_v(int a[], int size)
{
    int i;

    printf("Address : ");
    for (i = 0; i < size; i++) {
        printf("%d ", &a[i]);
    }
    printf("\n");
}

void
value_p(int *p, int size)
{
    int i;

    printf("Array : ");
    for (i = 0; i < size; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");
}

void
address_p(int *p, int size)
{
    int i;

    printf("Address : ");
    for (i = 0; i < size; i++) {
        printf("%d ", &p[i]);
    }
    printf("\n");
}
