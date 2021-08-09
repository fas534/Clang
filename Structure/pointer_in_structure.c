/* @Author	: MD. Fahim Abrar Saikat */
/* @Mail	: saikat.cucse.52@gmail.com */
/* @ID		: 1935202534 */
/* @Date	: 06/17/21, 02:43:11 PM */

#include<stdio.h>
#define MAX_SIZE 20


typedef struct Info
{
    char name[MAX_SIZE];
    int id;
    float cgpa;
} info;


int main()
{
    info student = {.id = 534,.name = "Saikat",  .cgpa = 3.75};

    info *ptr = NULL;
    ptr = &student;

    /* Memory address using  variables */
    /* printf("&student\t=> %d\n", &student); */
    /* printf("&student.name\t=> %d\n", &student.name); */
    /* printf("&student.id\t=> %d\n", &student.id); */
    /* printf("&student.cgpa\t=> %d\n", &student.cgpa); */


    /* Memory address using pointer */
    // & <name of the pointer> -> <member variable>

    /* printf("&student\t=> %d\n", ptr); */
    /* printf("&student.name\t=> %d\n", &ptr->name); */
    /* printf("&student.id\t=> %d\n", &ptr->id); */
    /* printf("&student.cgpa\t=> %d\n", &ptr->cgpa); *1/ */

    /* Value accessing using variables */
    /* printf("student.name\t=> %s\n", student.name); */
    /* printf("student.id\t=> %d\n", student.id); */
    /* printf("student.cgpa\t=> %.2f\n", student.cgpa); */


    /* Value accessing using pointer */
    // <name of the pointer> -> <member variable>

    /* printf("ptr->name => %s\n", ptr->name); */
    /* printf("ptr->id\t=> %d\n", ptr->id); */
    /* printf("ptr->cgpa => %.2f\n", ptr->cgpa); */

    /* User input */
    printf("Name : ");
    scanf("%s", &ptr->name);
    printf("ID : ");
    scanf("%d", &ptr->id);
    printf("CGPA : ");
    scanf("%f", &ptr->cgpa);


    /* Printing */
    printf("Output\nName : %s\n", ptr->name);
    printf("ID : %d\n", ptr->id);
    printf("ID : %.2f\n", ptr->cgpa);
    return 0;
}
