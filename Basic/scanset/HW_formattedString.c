#include<stdio.h>
int main()
{
     /*
    Problem: 
    Display output in the following format
    11101
      101
        1
    */
   
    int num1, num2, num3;

    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    
    printf("%05d\n",num1);
    printf("%5d\n",num2);
    printf("%5d\n",num3);
    
    
    
    
    
    /*== scanf() ==*/
    
    
    /*== printf() ==*/
    
    /*== int ==*/
    // int x;

    // scanf("%d",&x);
    
    // printf("%d\n",x);           // normal output

    // printf("%5d\n",x);          // total 5 characters, filled by white space while input<5
    // printf("%05d\n",x);         // total 5 characters, filled by 0 while input<5
    // printf("%-5d|\n",x);        // total 5 characters, filled by white space while input<5
    
    


    /*== char ==*/
    // char c;
    // scanf("%c",&c);

    // printf("%c\n",c);               // normal input
    
    // printf("%5c\n",c);              // total 5 characters, filled by white space while input<5
    // printf("%-5c\n",c);             // total 5 characters, filled by white space while input<5

    /*== string ==*/
    // char c[10];
    // scanf("%s",&c);

    // printf("%s\n",c);               // normal input
    
    // printf("%5s\n",c);              // total 5 characters, filled by white space while input<5
    // printf("%-5s\n",c);             // total 5 characters, filled by white space while input<5

   

    
    return 0;
}
