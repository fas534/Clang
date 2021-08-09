/* Project Name   - arr_ptr.c */
/* Created On     - 07/04/21, 11:51:47 AM */
/* Author Name    - MD. Fahim Abrar Saikat */
/* Author E-mail  - saikat.cucse.52@gmail.com */
/* Author Github  - https://github.com/FA-Saikat */

#include <stdio.h>
#define MAXSZ 10

void print(int*, int);
void input(int*, int);

int main()
{
    int arr[MAXSZ], size;
    int *p = arr;

    input(p, size);

    return 0;
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

void
print(int *p, int size)
{
    int i;

    for (i = 0; i < size; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");
}
