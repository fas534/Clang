#include<stdio.h>

#define MAX_SIZE 10

void check(int arr[], int *p, int size);
void update(int arr[], int *p, int size);
void error(int arr[], int *p);

int main()
{
    int arr[MAX_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, size = 10;
    int arr_2[MAX_SIZE], size_2 = 0;

    int *p = NULL;

    /* check(arr, p, size); */
    /* printf("\n"); */

    /* update(arr, p, size); */
    /* printf("\n"); */

    /* error(arr_2, p); */
    /* printf("\n"); */

    return 0;
}

void check(int arr[], int *p, int size)
{
    int i;
    p = arr;
    if(p==NULL)
    {
        printf("Error!\n");
    }

    printf("Memory address:\nArray: %d\nPointer: %d\nArray : ", arr, p);

    for(i=0; i<size; i++)
    {
        printf("%d ", *(p+i));
    }
}

void update(int arr[], int *p, int size)
{
    p = arr;
    p = p + 5;

    *p = 69;
    check(arr, p, size);
    printf("\n%d\n", p);

    p = p - 5;
    printf("%d\n", p);
}

void error(int arr[], int *p)
{
    /* p = arr; */

    if(p==NULL)
    {
        printf("Error!\n");
    }
}
