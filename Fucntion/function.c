#include<stdio.h>

/* Functon declaration */
// w/ Arguments & w/ Return value
int summation(int a, int b)
{
    /* Definition */
    return a+b;
}

/* Functon prototype of Substracton */
int substraction(int x, int y);

// w/ Arguments & w/o Return value
void void_func(int n)
{
    for(int i=1; i<=n; i++)
    {
        printf("%c\n", '*');
    }
}



int main()
{
    int a, b, n;
    scanf("%d", &a, printf("Enter a : "));
    scanf("%d", &b, printf("Enter b : "));
//    scanf("%d", &n, printf("Enter n :"));

    /* Function calling */
    int sum = summation(a, b);
    int sub = substraction(a, b);
    void_func(scanf("%d", &n));

    printf("Summation: %d\n", sum);
    printf("Substracton: %d\n", sub);
//    printf("Substracton: %d\n", sub);
    return 0;
}

/* Functon declaration */
int substraction(int x, int y)
{
    return x-y;
}
