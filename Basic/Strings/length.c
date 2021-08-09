/* Project Name   - length.c */
/* Created On     - 08/02/21, 08:39:54 AM */
/* Author Name    - MD. Fahim Abrar Saikat */
/* Author E-mail  - saikat.cucse.52@gmail.com */
/* uthor Github   - https://github.com/FA-Saikat */

#include <stdio.h>

void print(char []);
int length(char []);

int main()
{
    char str[] = "Hello world";

    print(str);
    printf("Length: %d\n", length(str));

    return 0;
}

void print(char arr[])
{
    int i;
    for (i = 0; i < length(arr); i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}

int length(char arr[])
{
    int count = 0, i = 0;
    /* count = i = 0; */

    while (arr[i]) {
        count++;
        i++;
    }

    return count;
}
