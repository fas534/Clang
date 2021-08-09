#include<stdio.h>
int main()
{
    int a;
    short int b;
    int c;

    // Memory address of variables
    printf("Memory address:\n");
    printf("%d\n", &a);
    printf("%d\n", &b);
    printf("%d\n", &c);

    /*
     * &a means the allocated address of the variable a
     * a means the value stored in the allocated address of the variable a
     *
     * It's not possible to access unused address which have been sandwitched by other address.
     *
     */


    // POINTER
    int *p = &a; // declaration and refering/ assigning
    int *q = &b;
    int *r;      // declaration
    r = &c;      // refering/ assigning

    /*
     * Valid pointer declaration -->
     * int *p;
     * int*p;
     * int * p;
     * int* p; -> special notation; used in functions
     *
     */

    // Memory address using pointer
    printf("\nUsing pointer:\n");
    printf("%d\n", p);
    printf("%d\n", q);
    printf("%d\n", r);

    printf("\nPointer variables address: \n");
    printf("%d\n", &p);
    printf("%d\n", &q);
    printf("%d\n", &r);

    /*
     * &p -> address of p variable
     * p --> value of p variable (memory address of a)
     *
     */

    // Assigning values to the variables using pointer
    *p = 10; // a
    *q = 3;  // b
    *r = 10; // c
    /*
     * *p => value of pointing variable
     * p ==> address of pointing variable
     */
    printf("\nValue:\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    // Printing values using pointer
    printf("\nUsing pointer:\n");
    printf("%d\n", *p);
    printf("%d\n", *q);
    printf("%d\n", *r);






    return 0;
}
