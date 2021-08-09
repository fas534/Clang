/* Project Name   - rplce_val.c */
/* Created On     - 07/03/21, 03:03:07 PM */
/* Author Name    - MD. Fahim Abrar Saikat */
/* Author E-mail  - saikat.cucse.52@gmail.com */
/* Author Github  - https://github.com/FA-Saikat */

#include <stdio.h>
#define MAXINT 10

void replace(int arr[], int size, int value, int key);
void print(int arr[], int size);

int main()
{
    int arr[MAXINT] = {1, 2, 3, 4, 5}, size = 5;
    int value , key;

    printf("Enter value: ");
    scanf("%d", &value);
    printf("Enter replace: ");
    scanf("%d", &key);

    printf("Before replacing: ");
    print(arr, size);

    replace(arr, size, value, key);

    printf("After replacing: ");
    print(arr, size);

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
replace(int arr[], int size, int value, int key)
{
    int i, flag = 0;

    for (i = 0; i < size; i++) {
        if (arr[i] == value) {
            arr[i] =  key;
        }
    }
}

