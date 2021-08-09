/* Project Name   - input.c */
/* Created On     - 07/04/21, 07:50:52 PM */
/* Author Name    - MD. Fahim Abrar Saikat */
/* Author E-mail  - saikat.cucse.52@gmail.com */
/* Author Github  - https://github.com/FA-Saikat */

#include <stdio.h>
#include <stdlib.h>
#define MAXSZ 10

void input(int *, int);
void print(int *, int);
void value(int *, int);

int main()
{
    int a[MAXSZ], size = 0;
    int *p = NULL;
    p = (int *) calloc(MAXSZ, sizeof(int));

    input(p, size);
    value(p, size);

    return 0;
}

void
print(int *p, int size)
{
    int i;

    for (i = 0; i < size; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");
}

void
input(int *p, int size)
{
    int i;

    for (i = 0; i < MAXSZ; i++) {
        scanf("%d", &p[i]);
        size++;
    }

    print(p, size);
}

