/* Project Name   - concatenation.c */
/* Created On     - 08/02/21, 09:24:08 AM */
/* Author Name    - MD. Fahim Abrar Saikat */
/* Author E-mail  - saikat.cucse.52@gmail.com */
/* Author Github  - https://github.com/FA-Saikat */

#include <stdio.h>

void print(char []);
int length(char []);
void concatenate(char [], char []);

int main()
{
    char str[] = "Hello";
    char anotherStr[] = "World";

    print(str);
    print(anotherStr);

    concatenate(str, anotherStr);
    print(str);

    return 0;
}

void print(char arr[])
{
    int i;

    if (!length(arr)) {
        printf("String is Empty!\n");
        return;
    }

    for (i = 0; i <= length(arr); i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}

int length(char arr[])
{
    int count = 0, i = 0;

    while (arr[i]) {
        count++;
        i++;
    }
    return count;
}

void concatenate(char arr[], char anotherArr[])
{
    int i = length(arr);
    int j;

    for (j = 0; anotherArr[j]; j++) {
        arr[i] = anotherArr[j];
        i++;
    }
    arr[i] = '\0';
}
