#include<stdio.h>
#include<limits.h>
#include<float.h>

int main() {
    printf("char: size=%zu, range=%d to %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("int: size=%zu, range=%d to %d\n", sizeof(int), INT_MIN, INT_MAX);
    printf("float: size=%zu, range=%e to %e\n", sizeof(float), FLT_MIN, FLT_MAX);
    printf("unsigned int: size=%zu, range=0 to %u\n", sizeof(unsigned int), UINT_MAX);
    printf("long: size=%zu, range=%ld to %ld\n", sizeof(long), LONG_MIN, LONG_MAX);
    printf("unsigned long: size=%zu, range=0 to %lu\n", sizeof(unsigned long), ULONG_MAX);
    printf("long long: size=%zu, range=%lld to %lld\n", sizeof(long long), LLONG_MIN, LLONG_MAX);
    printf("unsigned long long: size=%zu, range=0 to %llu\n", sizeof(unsigned long long), ULLONG_MAX);
    printf("long double: size=%zu, range=%Le to %Le\n", sizeof(long double), LDBL_MIN, LDBL_MAX);
    printf("this program is done by MAHINY CHARASIA 25TECCU01");
    return 0;
}
