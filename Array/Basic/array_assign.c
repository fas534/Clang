/* Assigning values to Array. */

#include<stdio.h>
#define MAX_SIZE 10

int main(){
    int array[MAX_SIZE], size = 0;
    int i;

    /*
    array[-1] = 0; // Invalid
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;
    array[5] = 6; // Invalid
    array[MAX_SIZE] = 6; // better explanation

    printf("%d\n", array[-1]); // Invalid
    printf("%d\n", array[0]);
    printf("%d\n", array[1]);
    printf("%d\n", array[2]);
    printf("%d\n", array[3]);
    printf("%d\n", array[4]);
    printf("%d\n", array[5]); // Invalid


    int array_2[MAX_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array_3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    */

    // User input
    for(i = 0; i < MAX_SIZE; i++){
        scanf("%d", &array[i], printf("Index %d: ", i));
//        scanf("%d", &array[i], 9); // invalid

        size++;
    }

    // Print
    printf("Array: ");
    for(i = 0; i < size; i++){
        printf("%d ", array[i]);
        // size++;
    }

    return 0;
}
