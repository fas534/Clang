/* Array */

#include<stdio.h>

int main(){
    int array[100];
    int index;

    printf("SIZE:\n");
    printf("\tArray: %d bytes\n", sizeof(array));
    printf("\tElement: %d bytes\n", sizeof(array[0]));

    printf("\nMEMORY ADDRESS:\n");
    printf("\tArray : %d\n", &array);
    printf("\tIndex -2 : %d\n", &array[-2]);
    printf("\tIndex -1 : %d\n", &array[-1]);
    printf("\tIndex 0 : %d\n", &array[0]);
    printf("\tIndex 1 : %d\n", &array[1]);
    printf("\tIndex 2 : %d\n", &array[2]);
    printf("\tIndex 101 : %d\n", &array[101]);
    printf("\tIndex 102 : %d\n", &array[102]);
    /*  
        array[10]; possible to know MA of array[>10] or even array[<0]
        explanation:
        index 1 = MA of array + 1*4
                = (652520 + 1*4) = 652524
        index 5 = MA of array + 5*4
                = (652520 + 1*4) = 652540

    */

    return 0;
}