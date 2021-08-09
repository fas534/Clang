/* Project Name   - insert.c */
/* Created On     - 07/03/21, 07:48:27 PM */
/* Author Name    - MD. Fahim Abrar Saikat */
/* Author E-mail  - saikat.cucse.52@gmail.com */
/* Author Github  - https://github.com/FA-Saikat */

#include <stdio.h>
#define MAXSZ 10

void insert_after   (int [], int, int, int);
void insert_at      (int [], int, int, int);
void insert_before  (int [], int, int, int);
void print          (int [], int);

int main()
{
    int arr[MAXSZ] = {1,2,3,4,5,6,7,8}, size = 8;
    int arr_2[MAXSZ], size_2 = 0;
    int index, key;
    printf("Index  >> ");
    scanf("%d", &index);
    printf("Key    >> ");
    scanf("%d", &key);

    print(arr, size);
    insert_at(arr, size, index, key);
    /* insert_before(arr, size, index, key); */
    /* insert_after(arr, size, index, key); */

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
insert_at(int arr[], int size, int index, int key)
{
    int i;
    if (size == 0) {
        printf("Array is Empty!\n");
    } else if (size == MAXSZ) {
        printf("Array Overflow!\n");
    } else if (index < 0 || index > size) {
        printf("Invalid Index!\n");
    } else {
        for (i = size; i >= index; i--) {
            arr[i+1] = arr[i];
        }
        arr[index] = key;
        size++;

        print(arr, size);
    }
}

void
insert_before(int arr[], int size, int index, int key)
{
    int i;
    if (size == 0) {
        printf("Array is Empty!\n");
    } else if (size == MAXSZ) {
        printf("Array Overflow!\n");
    } else if (index < 0 || index > size) {
        printf("Invalid Index!\n");
    } else {
        for (i = size; i >= index; i--) {
            arr[i+1] = arr[i];
        }
        arr[index - 1] = key;
        size++;

        print(arr, size);
    }
}

void
insert_after(int arr[], int size, int index, int key)
{
    int i;
    if (size == 0) {
        printf("Array is Empty!\n");
    } else if (size == MAXSZ) {
        printf("Array Overflow!\n");
    } else if (index < 0 || index > size) {
        printf("Invalid Index!\n");
    } else {
        for (i = size; i >= index; i--) {
            arr[i+1] = arr[i];
        }
        arr[index+1] = key;
        size++;

        print(arr, size);
    }
}

