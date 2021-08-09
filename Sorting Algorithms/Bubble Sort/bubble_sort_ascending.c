/* Project Name   - bubble_sort_ascending.c */
/* Created On     - 07/30/21, 08:39:25 AM */
/* Author Name    - MD. Fahim Abrar Saikat */
/* Author E-mail  - saikat.cucse.52@gmail.com */
/* Author Github  - https://github.com/FA-Saikat */

#include <stdio.h>
#define MAXSZ 5

void print(int arr[MAXSZ], int size);
void sort(int arr[MAXSZ], int size);

int main()
{
    int arr[MAXSZ] = {17, 8, 47, 51, 31}, size = 5;
    int arr_2[MAXSZ] = {8, 17, 47, 31, 51}, size_2 = 5;

    /*
    print(arr,size);
    sort(arr,size);
    print(arr,size);
    */

    print(arr_2,size_2);
    sort(arr_2,size_2);
    print(arr_2,size_2);


    return 0;
}

void print(int arr[MAXSZ], int size)
{
    int i;

    for (i = 0; i < MAXSZ; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

void sort(int arr[MAXSZ], int size)
{
    int pass, i;
    int temp;
    int sorted = 0;

    for (pass = 0; pass < MAXSZ; pass++) {
        printf("Pass: %d\n", pass+1);
        sorted = 1;

        for (i = 0; i < (MAXSZ -1); i++) {
            if (arr[i] > arr[i+1]) {
                temp    = arr[i];
                arr[i]  = arr[i+1];
                arr[i+1]= temp;
                sorted = 0;
            }
        }

        if(sorted) {
            return;
        }
    }
}
