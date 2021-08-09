#include<stdio.h>
#define MAX_VALUE 10

int print_index(int array[], int element, int key);

int main()
{
    int array_1[MAX_VALUE] = {1, 2, 1, 4, 1}, element_of_1 = 5;
    int array_2[MAX_VALUE] = {0, 2, 3, 1, 1}, element_of_2 = 5;
    int array_3[MAX_VALUE] = {1, 1, 1, 1, 5}, element_3 = 5;

    int key = 1;
    int count = 0;
    int i;

    print_index(array_1, element_1, key);
    printf("\n");
    print_index(array_2, element_2, key);
    printf("\n");
    print_index(array_3, element_3, key);
    printf("\n");

    return 0;
}

// User function
int print_index(int array[], int element, int key)
{
    int i, count = 0;

    for(i = 0; i < element; i++)
    {
        if(array[i] == key)
        {
//            printf("%d ", i);
            count++;

        }
    }
    printf("%d ", count);

}




/*
    for (i = 0; i < element; i++ )
    {
        if (array[i] == key)
        {
     //       count++;
            printf("%d ", i);
        }

    }
    //printf("Count : %d\n", count);
    */


