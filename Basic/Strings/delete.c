/* Project Name   - delete.c */
/* Created On     - 08/02/21, 10:06:32 AM */
/* Author Name    - MD. Fahim Abrar Saikat */
/* Author E-mail  - saikat.cucse.52@gmail.com */
/* Author Github  - https://github.com/FA-Saikat */

#include <stdio.h>

void print(char []);
int length(char []);
int delete(char []);

int main()
{
    char str[] = "This is a line.";

    print(str);
    delete(str);
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

int delete(char arr[])
{
    int size = length(arr);
    int i;

    for (i = 0; i < size; i++) {
        arr[i] = '\0';
        size--;
    }
    return size;
}
