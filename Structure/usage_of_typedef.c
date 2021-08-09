/* @Author	: MD. Fahim Abrar Saikat */
/* @Mail	: saikat.cucse.52@gmail.com */
/* @ID		: 1935202534 */
/* @Date	: 06/17/21, 12:10:28 PM */

#include<stdio.h>
#define PI 3.14159


/* typedef struct Triangle triangle; */
struct Triangle
{
    float base, height;
};
typedef struct Triangle triangle;

typedef struct Circle
{
    int side;
    double radius;
}circle;

int main()
{
    struct Triangle A = {5, 17};
    triangle B = {5, 18};
    printf("Area of triangle A: %.2f\n", (.5 * A.base * A.height));
    printf("Area of triangle B: %.2f\n", (.5 * B.base * B.height));

    struct Circle C = {12, 14};
    circle D = {17, 11.7};
    printf("Subtraction of area C: %.2f\n", ((C.side * C.side)-(C.radius * C.radius * PI)));
    printf("Subtraction of area D: %.2f\n", ((D.side * D.side)-(D.radius * D.radius * PI)));


    return 0;
}

