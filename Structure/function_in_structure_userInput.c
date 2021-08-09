/* @Author	: MD. Fahim Abrar Saikat */
/* @Mail	: saikat.cucse.52@gmail.com */
/* @ID		: 1935202534 */
/* @Date	: 06/20/21, 10:21:36 PM */

#include<stdio.h>

struct  datatype {
        int x;
        int y;
};
typedef struct datatype var;

void input(var*);
void output(var*);

int
main()
{
    var var1;
    var *ptr1 = &var1;

    printf("%d\n", &var1);
    printf("%d\n", ptr1);

    input(ptr1);
    output(ptr1);

    return 0;
}

void
input(var *ptr)
{
    scanf("%d %d", &ptr->x, &ptr->y);
}

void
output(var *ptr)
{
    printf("X = %d\nY = %d\n", ptr->x, ptr->y);
}

