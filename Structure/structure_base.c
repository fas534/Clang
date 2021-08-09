/* @Author	: MD. Fahim Abrar Saikat */
/* @Mail	: saikat.cucse.52@gmail.com */
/* @ID		: 1935202534 */
/* @Date	: 06/17/21, 11:41:47 AM */

#include<stdio.h>
#define MAX_SIZE 20


/* Structure defining */
struct Info
{
    /* Member variables */
    char name[MAX_SIZE];
    int id;
    float cgpa;
};


int main()
{
    /* Structure declaration */
    /* <dataytype> <variable> */
    struct Info saikat;

    /* Accessing member variables for saikat using member operator (.) */

    /* Assigning */
    /*
        variable.member variables = {value}
        variable.member variables = {value, value}
        variable.member variables = {.member_1 = value, .member_2 = value}
        variable.member variables = {.member_2 = value, .member_1 = value}
    */

    /* User input */
    scanf("%s", &saikat.name);
    scanf("%d", &saikat.id);
    scanf("%f", &saikat.cgpa);


    /* Print */
    printf("Saikat\n");
    printf("Name: %s\n", saikat.name);
    printf("ID  : %d\n", saikat.id);
    printf("ID  : %.2f\n", saikat.cgpa);

    return 0;
}
