#include<stdio.h>
void print_1toN(int i, int n);
int sum_1toN(int i, int n);

int main()
{
    // print_1toN(1, 10);


    int s = sum_1toN(1, 10);
    printf("Sum = %d\n", s);
    return 0;
}

void print_1toN(int i, int n)
{
   printf("%d\n", i);
   i++;

    if(i<=n)
    {
        print_1toN(i, n);
    }
   // printf("%d\n", i);
}

int sum_1toN(int i, int n)
{
    /*
    for(i=1; i<=n; i++)
    {
        sum += i;
    }
    */
    if(i==n)
    {
        return n;
    }
    // printf("%d\n", i);
    // i++;
    return i++ + sum_1toN(i, n);
    // printf("%d\n", i);
}
