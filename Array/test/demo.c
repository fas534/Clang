/* Project Name   - demo.c */
/* Created On     - 07/04/21, 12:00:03 AM */
/* Author Name    - MD. Fahim Abrar Saikat */
/* Author E-mail  - saikat.cucse.52@gmail.com */

#include <stdio.h>
#define MAXSZ 20

void print(int [], int);
void all(int [], int, int);

int main()
{
    int arr[MAXSZ] = {0, 7, 1, 2, 3, 4, 7, 7, 5, 7}, size = 10;
    int key;
    print(arr, size);

    scanf("%d", &key);
    all(arr, size, key);

    return 0;
}

void
print(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void
all(int arr[], int size, int key)
{
    int i,j,tem;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            for ( j=i; j < size ; j++)
            {
                arr[j] = arr[j+1];
            }
            size--;
            i=0;

        }
    }
    print(arr, size);
}
