/*
 printing maximum and minimum value for each data type using limits.h
 */

#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("int min: %d \t max: %d\n", INT_MIN, INT_MAX);
    printf("float min: %e \t max: %e\n", FLT_MIN, FLT_MAX);
    printf("double min: %e \t max: %e\n", DBL_MIN, DBL_MAX);
    printf("char min: %d \t max: %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("short min: %d \t max: %d\n\n", SHRT_MIN, SHRT_MAX);
    printf("long int min: %ld \t max: %ld\n", LONG_MIN, LONG_MAX);
    printf("long long int min: %lld \t max: %lld\n", LLONG_MIN, LLONG_MAX);
    printf("unsigned int min: 0 \t max %lu\n\n", UINT_MAX);
    printf("unsigned long int min: 0 \t max: %lu\n\n", ULONG_MAX);
    printf("unsigned short int min: 0 \t max: %d\n\n", USHRT_MAX);
    printf("unsigned long long int min: 0 \t max: %llu\n\n", ULLONG_MAX);

    return 0;
}
