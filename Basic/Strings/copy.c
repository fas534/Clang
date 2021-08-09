/* Project Name   - copy.c */
/* Created On     - 08/02/21, 09:02:27 AM */
/* Author Name    - MD. Fahim Abrar Saikat */
/* Author E-mail  - saikat.cucse.52@gmail.com */
/* Author Github  - https://github.com/FA-Saikat */

#include <stdio.h>
#define MAXSZ 30

void print(char []);
int length(char []);
void copy(char [], char []);

int main()
{
    char str[MAXSZ] = "Hello World";
    char anotherStr[MAXSZ];

    print(str);
    print(anotherStr);

    copy(str, anotherStr);
    print(anotherStr);

    return 0;
}

void print(char arr[])
{
    int i;

    if (!length(arr)) {
        printf("String is Empty!\n");
        return;
    }

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

void copy(char arr[], char anotherArr[])
{
    int i;

    for (i = 0; i <= length(arr); i++) {
        anotherArr[i] = arr[i];
    }
}
