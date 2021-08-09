#include <stdio.h>
int main()
{
    // printf()
    printf("return value of printf() : %d\n", printf("hello_world\n")); // Number of character

    // scanf()
    int x, y, z;
    printf("return value of second scanf() : %d\n", scanf("%d%d%d", &x, &y, &z)); // NUmber of input

    // getchar()
    char a;
    printf("return value of getchar(): %d\n", a = getchar()); // ASCII value of the character (New line in this case)

    // putchar
    a='@';
    putchar(a); // returns the unsigned character
    /*
        for (a='b'; a<='x'; a++){
            putchar(a);
        }
    */
    printf("return value of putchar(): %d\n",putchar(a)); // ASCII value of the character

    return 0;
}
