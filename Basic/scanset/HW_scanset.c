#include<stdio.h>
int main()
{
    char a, b;

    /*==Input==*/

    /*
        normal input
        scanf("%c", &a);    // assigns new input to a, keeps new line  as a character in buffer
        scanf("%c", &b);    // buffered character gets assigned to b, skips prompt for new input
    */

    /*
        dirty solve
        scanf("%c", &a);    // assigns new input to a, keeps new line as a character in buffer
        getchar();          // bufferd character gets dumped, prompts for new input
        scanf("%c", &b);    // assigns new input to b, keeps new line as a character in buffer
    */

   char c1[10], c2[10], c;
//    scanf("%[A-Z]s", c1);
   scanf("%[A-Z,a-z]s", c2);

    /*==Output==*/
    // printf("1.%c\n", a);
    // printf("2.%c\n", b);
//    printf("%s\n", c1);
   printf("%s\n", c2);


    return 0;
}

