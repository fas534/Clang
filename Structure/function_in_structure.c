/* @Author	: MD. Fahim Abrar Saikat */
/* @Mail	: saikat.cucse.52@gmail.com */
/* @ID		: 1935202534 */
/* @Date	: 06/19/21, 08:40:10 PM */


#include<stdio.h>

/* Defining typedef */
typedef struct Datatype data;
/* Defining structure */

struct Datatype {
    int x;
    int y;
};

/* Defining typedef */
typedef struct Datatype data;

/* Function's prototype */
void passByValue(data *demo);
void passByRef(data demo);

int main(){
    data var_1 = {534, 75} ;
    /* Declaration & assignation of a pointer for var_1 */
    /* data *ptr_1 = &var_1; */

    /* scanf("%d %d", &ptr_1->x, &ptr_1->y); */

    /* PASS BY VALUE` */
    /* Function calling */
    /* passByValue(ptr_1); */

    /* Pass by REFERENCE */
    passByRef(var_1);

    return 0;
}

void passByValue(data *demo)
{
    printf("X = %d\nY = %d\n", demo->x, demo->y);
}

void passByRef(data demo)
{
    printf("X = %d\nY = %d\n", &demo.x, &demo.y);

}
