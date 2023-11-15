#include <stdio.h>

typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long int u32;
typedef unsigned long long int u64;
typedef signed char s8;
typedef signed short int s16;
typedef signed long int s32;
typedef signed long long int s64;
typedef float f32;
typedef double f64;
typedef long double f128;

int main(void)
{
    printf("***************SizeOf***************\n");
    printf("\n");
    printf("Size of u8   = %d Bytes.\n", sizeof(u8));
    printf("Size of u16  = %d Bytes.\n", sizeof(u16));
    printf("Size of u32  = %d Bytes.\n", sizeof(u32));
    printf("Size of u64  = %d Bytes.\n", sizeof(u64));
    printf("Size of s8   = %d Bytes.\n", sizeof(s8));
    printf("Size of s16  = %d Bytes.\n", sizeof(s16));
    printf("Size of s32  = %d Bytes.\n", sizeof(s32));
    printf("Size of s64  = %d Bytes.\n", sizeof(s64));
    printf("Size of f32  = %d Bytes.\n", sizeof(f32));
    printf("Size of f64  = %d Bytes.\n", sizeof(f64));
    printf("Size of f128 = %d Bytes.\n", sizeof(f128));
    printf("\n");
    printf("****************END.****************\n");

    return 0;
}