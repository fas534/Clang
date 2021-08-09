#include<stdio.h>
#include<stdlib.h>

int main()
{
    // Variables declaration
    int a;
    short int b;
    char c;

    // Memory address of the variables
    printf("Memory address of variables:\n");
    printf("a: %d\n", &a);
    printf("b: %d\n", &b);
    printf("c: %d\n", &c);

    // Pointers declaration, address assigning
    // pointer initialization while declaration
    int *p = &a;
    short int *q = &b;

    // declaration then initialization
    char *r;
    r = &c;

    /** NOTE
     *
     * * Valid declaration
     * int *p, *q;
     * int*p;
     * int * p;
     * int* p; >> special, used in function
     *
     * * Invalid initialization
     * int *p = 6; >> Accessing memory block 6
     * p = 6; >> Setting the value of the pointer to 5
     *
     */

    // Memory address of pointers
    printf("\nMemory address of variables using pointers:\n");
    printf("a: %d\n", p);
    printf("b: %d\n", q);
    printf("c: %d\n", r);

    // Memory address of pointer variables
    printf("\nMemory address of pointer variables:\n");
    printf("a: %d\n", &p);
    printf("b: %d\n", &q);
    printf("c: %d\n", &r);

    // Assigning values to the variables using pointers
    *p = 10;    // a = 10;
    *q = 5;     // b = 5;
    *r = 'c';   // c = 'c';

    // Printing values of variables using pointer
    printf("\nValue of the variables:\n");
    printf("a: %d\n", *p);
    printf("b: %hd\n", *q);
    printf("c: %c\n", *r);

    /** NOTE
     *
     * &p >>==>> Memory address of the varible p
     * p  >>==>> Value of the variable p
     * *p >>==>> Value of the pointing variable of pointer p
     *
     */

    /*========================= Class 2 ============================*/

    // Arithmatic operation
    // User input

    printf("\nEnter value: ");
    scanf("%d %hd", p, q);

    printf("\nArithmatic Operation:\n");
    printf("%d + %hd = %d\n", *p, *q, *p + *q);
    printf("%d - %hd = %d\n", *p, *q, *p - *q);
    printf("%d * %hd = %d\n", *p, *q, *p * *q);
    printf("%d / %hd = %d\n", *p, *q, *p / *q);
    printf("%d %% %hd = %d\n", *p, *q, *p % *q);


    // Unary Operator - increment & decrement
    (*p)++; // a++;
    printf("\nUnary Operation:\n");
    printf("(*p)++ = %d\n", *p);

    *p++; // Increments address of pointing variable - &a++;
    printf("*p++ = %d\n", *p);

    /*===========================Dynamic Memory Allocation ===========================*/

    // Efficient, allocates memory during runtime.
    int *dma_pointer;
    dma_pointer = (int *) malloc(sizeof (int));
//    char *dma_pointer2;
//    dma_pointer2 = (char *) malloc(sizeof (char));

    printf("\nDynamic Memory Allocation:\n");

    /*
    int *pointer_array;
    pointer_array = (int *) malloc(5 * sizeof (int));

    for(int i=0; i<5; i++)
    {
        printf("Enter value of %d: ", i);
        scanf("%d", &pointer_array[i]);
    }

    // exceeding array size
    for(int i=0; i<6; i++)
    {
        printf("index %d: %d\n", i, pointer_array[i]);
    }
    */

    // User input
    int n;
    printf("\nArray size: ");

    int *another_array;
    another_array = (int *) malloc(scanf("%d", &n) * sizeof(int));

    for(int i=0; i<n; i++)
    {
        printf("Index %d: ", i);
        scanf("%d", &another_array[i]);
    }

    printf("Array elements:\n");
    for(int i=0; i<n; i++)
    {
        printf("Memory address: %d\tIndex %d: %d\n", &another_array[i], i, another_array[i]);
    }

    free(dma_pointer);

    return 0;
}
