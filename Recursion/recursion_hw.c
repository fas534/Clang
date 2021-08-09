#include<stdio.h>
int sum_1toN(int n);

int main()
{
    int s = sum_1toN(5);
    printf("Sum = %d\n", s);

    return 0;
}

int sum_1toN(int n)
{
    int i;
    
    while(n--)
    {
        int temp  = i = n+1;
        printf("%d\n", i);
    }
}
