#include<stdio.h>
#define MAX_SIZE 10

void print_array(int array[], int cur_size);
int delete_index(int array[], int cur_size, int index);
int delete_before_index(int array[], int cur_size, int index);
int delete_after_index(int array[], int cur_size, int index);

int main()
{
    int array_1[MAX_SIZE] = {1, 2, 3, 4, 5}, cur_size_1 = 5;
    int array_2[MAX_SIZE] = {1, 2, 3, 4, 5}, cur_size_2 = 5;
    int array_3[MAX_SIZE] = {1, 2, 3, 4, 5}, cur_size_3 = 5;
    int key = 3;
    int index = 1;

    /* print_array */
    print_array(array_1, cur_size_1);
    printf("\n");

    /* Delete before index */
    int size = delete_before_index(array_1, cur_size_1, index);
    print_array(array_1, size);
    printf("\n");

    /* delete_index */
    size = delete_index(array_2, cur_size_2, index);
    print_array(array_2, size);
    printf("\n");

    /* Delete after index */
    size = delete_after_index(array_3, cur_size_3, index);
    print_array(array_3, size);
    printf("\n");

    return 0;
}

/* Print */
void print_array(int array[], int cur_size)
{
    int i;

    for(i=0; i<cur_size; i++)
    {
        printf("%d ", array[i]);
    }
}

/* Delete before index */
int delete_before_index(int array[], int cur_size, int index)
{
    int i;

    for(i = index-1; i<cur_size; i++)
    {
        array[i] = array[i+1];
    }
    cur_size--;

    return cur_size;
}

/* Delete index */
int delete_index(int array[], int cur_size, int index)
{
    int i;

    for(i = index; i<cur_size-1; i++)
    {
        array[i] = array[i+1];
    }
    cur_size--;

    return cur_size;
}

/* Delete after index */
int delete_after_index(int array[], int cur_size, int index)
{
    int i;

    for(i = index+1; i<cur_size; i++)
    {
        array[i] = array[i+1];
    }
    cur_size--;

    return cur_size;
}


