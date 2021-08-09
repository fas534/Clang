#include <stdio.h>

int main()
{
    /* Declaration */
    int array[10];
    int index = 0;

    /* Declaration & initialization */
    int ano_array[10] = {1,2,3,4,5,6,7,8,9,0};

    /*
    or,
        array_1[0] = 1;
        array_1[1] = 1;
        array_1[2] = 1;
        array_1[3] = 1;
        .
        .
        .
        array_1[9] = 9;
    */

    /* Size */
    printf("Size of array : %d\n", sizeof(array));
    printf("Size of elements : %d\n", sizeof(array[index])); // array[index] is index of array; NOT a variable,


    /* Memory address */
    printf("Memory address of index: %d\n", &index);
    printf("Memory address of array: %d\n", &array);
    // printf("Memory address of array: %d\n", array);
    // rintf("Memory address of array: %d\n", &array[index]); // since index = 0 and index of an array starts from 0

    /* Sequential Storage */
    printf("Memory address of array[0]: %d\n", &array[0]);
    printf("Memory address of array[1]: %d\n", &array[1]);
    printf("Memory address of array[2]: %d\n", &array[2]);
    printf("Memory address of array[3]: %d\n", &array[3]);
    printf("Memory address of array[4]: %d\n", &array[4]);

    /* Index */
    // Valid index >> index = 0 to index = cur_size-1

    // Invaild index >> index < 0 && index >= cur_size, example-
    printf("Memory address of array[-5]: %d\n", &array[-5]);
    printf("Memory address of array[0]: %d\n", &array[0]);
    printf("Memory address of array[10]: %d\n", &array[10]);

    /*
    explanation:
        MA of index i = MA of array +/- (index * size)
    example:
       index -5 = MA of array + (-5)*4
               = (652520 - 20) = 652500
       index 1 = MA of array + 1*4
               = (652520 + 4) = 652524
       index 5 = MA of array + 5*4
               = (652520 + 20) = 652540
    */

    return 0;
}
