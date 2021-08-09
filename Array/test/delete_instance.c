/* Project Name   - delete_instance.c */
/* Created On     - 07/03/21, 10:41:57 PM */
/* Author Name    - MD. Fahim Abrar Saikat */
/* Author E-mail  - saikat.cucse.52@gmail.com */
/* Author Github  - https://github.com/FA-Saikat */

#include <stdio.h>
#define MAXSZ 20

void print(int [], int);
void all(int arr[], int size, int key);
void first(int arr[], int size, int key);
void last(int arr[], int size, int key);

int main()
{
    int arr[MAXSZ] = {0, 7, 1, 2, 3, 4, 7, 7, 5, 7}, size = 10;
    int key;

    print(arr, size);

    scanf("%d", &key);
    /* first(arr, size, key); */
    /* last(arr, size, key); */
    all(arr, size, key);
    return 0;
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

void
first(int arr[], int size, int key)
{
    int i;

    for (i = 0; i < size; i++) {
        if (arr[i] == key) {
            for (; i < size; i++) {
                arr[i] = arr[i+1];
            }
        }
    }
    size--;

    print(arr, size);
}


void
last(int arr[], int size, int key)
{
    int i;

    for (i = size; i > 0; i--) {
        if (arr[i] == key) {
            for (; i > size; i++){
                arr[i] = arr[i+1];
            }
        }
    }
    size--;

    print(arr, size);
}

void
all(int arr[], int size, int key)
{
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == key) {
            for (; i < size; i++) {
                arr[i] = arr[i+1];
            }
            size--;
            i = 0;
        }
    }

    print(arr, size);
}
