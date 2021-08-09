/* Project Name   - delete.c */
/* Created On     - 07/03/21, 08:45:35 PM */
/* Author Name    - MD. Fahim Abrar Saikat */
/* Author E-mail  - saikat.cucse.52@gmail.com */
/* Author Github  - https://github.com/FA-Saikat */

#include <stdio.h>
#define MAXSZ 10

void delete_after   (int [], int, int);
void delete_at      (int [], int, int);
void delete_before  (int [], int, int);
void print          (int [], int);

int main()
{
    int arr[MAXSZ] = {0, 1, 2, 3, 4, 5, 6, 7}, size = 8;
    int arr_2[MAXSZ], size_2 = 0;
    int index;
    printf("Index  >> ");
    scanf("%d", &index);

    print(arr, size);
    delete_at(arr, size, index);
    /* delete_before(arr, size, index); */
    /* delete_after(arr, size, index); */

    return 0;
}

void
print(int arr[], int size)
{
    int i;
    if (size == 0) {
        printf("Array is Empty!");
    } else {
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void
delete_at(int arr[], int size, int index)
{
    int i;
    if (size == 0) {
        printf("Array is Empty!\n");
    } else if (size == MAXSZ) {
        printf("Array Overflow!\n");
    } else if (index < 0 || index >= size) {
        printf("Invalid Index!\n");
    } else {
        for (i = index; i < size; i++) {
            arr[i] = arr[i+1];
        }
        size--;

        print(arr, size);
    }
}

void
delete_before(int arr[], int size, int index)
{
    int i;
    if (size == 0) {
        printf("Array is Empty!\n");
    } else if (size == MAXSZ) {
        printf("Array Overflow!\n");
    } else if (index < 0 || index >= size) {
        printf("Invalid Index!\n");
    } else {
        for (i = index-1; i < size; i++) {
            arr[i] = arr[i+1];
        }
        size--;

        print(arr, size);
    }
}

void
delete_after(int arr[], int size, int index)
{
    int i;
    if (size == 0) {
        printf("Array is Empty!\n");
    } else if (size == MAXSZ) {
        printf("Array Overflow!\n");
    } else if (index < 0 || index >= size) {
        printf("Invalid Index!\n");
    } else {
        for (i = index+1; i < size; i++) {
            arr[i] = arr[i+1];
        }
        size--;

        print(arr, size);
    }
}

