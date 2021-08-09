/* Project Name   - assign.c */
/* Created On     - 07/03/21, 02:16:16 PM */
/* Author Name    - MD. Fahim Abrar Saikat */
/* Author E-mail  - saikat.cucse.52@gmail.com */
/* Author Github  - https://github.com/FA-Saikat */


#include <stdio.h>
#define MAXSZ 10

int assign(int [], int );
void print(int [], int );

int main()
{
    int arr_1[MAXSZ], size_1 = 0;
    int arr_2[MAXSZ], size_2 = 0;

    int new_size = assign(arr_1, size_1);
    print(arr_1, new_size);

    return 0;
}

int
assign(int arr[], int size)
{
    int i;

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        size++;
    }
    return size;
}

void
print(int arr[], int size)
{
    int i;

    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
