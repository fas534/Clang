#include<stdio.h>
// #include<stdlib.h>

#define MAX_SIZE 10

void arr_ptr(int array[], int *ptr);

int main(){
    int arr[MAX_SIZE] = {1, 2, 3, 4, 5}, size = 5;
    int arr_2[MAX_SIZE] = {1, 3, 4, 5}, size_2 = 4;
    int arr_3[MAX_SIZE] = {1, 2, 5}, size_3 = 3;

    int *p = NULL;
    int *q = NULL;
    int *r = NULL;

    /* p = arr; */
    /* printf("%d\n", arr); */
    /* printf("%d\n", &arr); */
    /* printf("%d\n", &arr[0]); */
    /* printf("%d\n", p); */

    arr_ptr(arr, p);
    printf("\n");

    arr_ptr(arr_2, q);
    printf("\n");

    arr_ptr(arr_3, r);
    printf("\n");
    return 0;
}

void arr_ptr(int array[], int *ptr){
    ptr = array;
    printf("Memory Address:\nArr: %d\nPTR: %d\n", array, ptr);

    /*
        * Issue:
        * when, printf("", &arr, p); memory address different
        * when, printf("", arr, p); memory address same
        * when, printf("", &arr[0], p); memory address same
    */
}
