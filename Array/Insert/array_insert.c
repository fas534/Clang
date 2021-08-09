#include<stdio.h>
#define MAX_SIZE 10

void print(int arr[], int size);
void insert(int arr[], int size, int index, int key);
void before(int arr[], int size, int index, int key);
void after(int arr[], int size, int index, int key);

int main()
{
    int arr[MAX_SIZE] = {1,2,3,4,5}, size = 5;
    int key = 69, index;
    scanf("%d", &index);

    /* after(arr, size, index, key); */
    insert(arr, size, index+1, key);
    return 0;
}

void print(int arr[], int size)
{
    int i;

    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void insert(int arr[], int size, int index, int key)
{
    int i;

    if(size==MAX_SIZE)
    {
        printf("Array Overflow!\n");
    }
    else if(index<0 || index>size)
    {
        printf("Invalid index!\n");
    }
    else
    {
        for(i=size; i>index; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[index] = key;

        size++;

        print(arr, size);
        printf("\n");
    }
}

void before(int arr[], int size, int index, int key)
{
    int i;


    for(i=size; i>index; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[index-1] = key;

    size++;
    print(arr, size);
    printf("\n");
}

void after(int arr[], int size, int index, int key)
{
    int i;

    if(size==MAX_SIZE)
    {
        printf("Array Overflow!\n");
    }
    else if(index<0 || index>=size)
    {
        printf("Invalid index!\n");
    }
    else
    {
        for(i=size; i>index; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[index+1] = key;

        size++;
        print(arr, size);
        printf("\n");
    }
}

// begin (arr, size, 0, key)
// begin (arr, size, size, key)
