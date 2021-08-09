#include<stdio.h>

int a, b;
short int c;
long long int d;
char e, f;

int main()
{
    int m, n;
    short int o;
    long long int p;
    char q, r;

    printf("memory address of a: %d\n", &a);
    printf("memory address of b: %d\n", &b);
    printf("memory address of c: %hd\n", &c);
    printf("memory address of d: %lld\n", &d);
    printf("memory address of e: %d\n", &d);
    printf("memory address of f: %d\n", &d);
    printf("memory address of m: %d\n", &m);
    printf("memory address of n: %d\n", &n);
    printf("memory address of o: %hd\n", &o);
    printf("memory address of p: %lld\n", &p);
    printf("memory address of q: %d\n", &p);
    printf("memory address of r: %d\n", &p);

    /*
    printf("memory address of a in dec: %lld\n", &a);
    printf("memory address of a in oct: %o\n", &a);
    printf("memory address of a in hex: %x\n", &a);
    printf("memory address using pointer: %p\n\n", &a);

    printf("memory address of b in dec: %d\n", &b);
    printf("memory address of b in oct: %o\n", &b);
    printf("memory address of b in hex: %x\n", &b);
    printf("memory address using pointer: %p\n\n", &b);

    printf("memory address of c in dec: %d\n", &c);
    printf("memory address of c in oct: %o\n", &c);
    printf("memory address of c in hex: %x\n", &c);
    printf("memory address using pointer: %p\n\n", &c);

    printf("memory address of d in dec: %d\n", &d);
    printf("memory address of d in oct: %o\n", &d);
    printf("memory address of d in hex: %x\n", &d);
    printf("memory address using pointer: %p\n\n", &d);
    */
   
    return 0;
}
