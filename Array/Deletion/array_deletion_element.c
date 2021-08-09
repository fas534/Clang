#include<stdio.h>
#define MAX_SIZE 10

void array_print(int array[], int cur_size);
int search(int array[], int cur_size, int key);

int delete_before(int array[], int cur_size, int key);
int delete_element(int array[], int cur_size, int index);
int delete_after(int array[], int cur_size, int key);

int main()
{
    int array[MAX_SIZE] = {1, 2, 3, 4, 5, 6}, cur_size = 6;
    int array_2[MAX_SIZE] = {1, 2, 3, 4, 5, 6}, cur_size_2 = 6;
    int array_3[MAX_SIZE] = {1, 2, 3, 4, 5, 6}, cur_size_3 = 6;
    int key, index, size;


    /* Print */
    array_print(array, cur_size);
    scanf("%d", &key);

    /* Search */
    /* size = search(array, cur_size, key); */

    //  /* Delete */
    delete_element(array, cur_size, key);

    /* Delete before */
    delete_before(array_2, cur_size_2, key);

    /* Delete after */
    delete_after(array_3, cur_size_3, key);

    return 0;
}


/* Print */
void array_print(int array[], int cur_size)
{
    int i;

    for(i=0; i<cur_size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

/* Search */
int search(int array[], int cur_size, int key)
{
    int i;
    for(i=0; i<cur_size; i++)
    {
        if(array[i] == key)
        {
            return i;
        }
    }

    return -1;
}

/* Delete */
int delete_element(int array[], int cur_size, int key)
{
    int index, i;
    index = search(array, cur_size, key);

    for(i=index; i<cur_size-1; i++)
    {
        array[i] = array[i+1];
    }
    cur_size--;

    array_print(array, cur_size);
    return cur_size;
}

/* Delete before */
int delete_before(int array[], int cur_size, int key)
{
    int index, i;

    index = search(array, cur_size, key);
    ("INDEX: %d\n", index);

    for(i=index-1; i<cur_size-1; i++)
    {
        array[i] = array[i+1];
    }

    cur_size--;
    array_print(array, cur_size);

    return cur_size;
}

/* Delete after */
int delete_after(int array[], int cur_size, int key)
{
    int index, i;

    index = search(array, cur_size, key);

    for(i=index+1; i<cur_size-1; i++)
    {
        array[i] = array[i+1];
    }

    cur_size--;
    array_print(array, cur_size);

    return cur_size;
}
