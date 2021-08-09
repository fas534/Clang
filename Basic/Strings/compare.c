/* Project Name   - compare.c */
/* Created On     - 08/02/21, 09:15:31 AM */
/* Author Name    - MD. Fahim Abrar Saikat */
/* Author E-mail  - saikat.cucse.52@gmail.com */
/* Author Github  - https://github.com/FA-Saikat */

#include <stdio.h>

void print(char []);
int length(char []);
int compare(char [], char []);

int main()
{
    char str1[] = "Curry";
    char str2[] = "Salad";
    char str3[] = "Curry";
    char str4[] = "FishCurry";

    compare(str1, str2) ? printf("Different\n") : printf("Same\n");
    compare(str1, str3) ? printf("Different\n") : printf("Same\n");
    compare(str1, str4) ? printf("Different\n") : printf("Same\n");

    return 0;
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

int compare(char arr[], char anotherArr[])
{
    int i;
    if (length(arr) != length(anotherArr)) {
        return 1;
    }

    for (i = 0; i <= length(arr); i++) {
        if (arr[i] != anotherArr[i]) {
            return 1;
        }
    }

    return 0;
}
