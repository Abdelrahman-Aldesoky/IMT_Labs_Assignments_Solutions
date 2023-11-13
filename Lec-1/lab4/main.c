#include <stdio.h>

int main(void)
{
    /*variables*/
    int x = 7, y = 4;
    int k = 0, l = 0, m = 0, n = 0, z = 0;

    /*and*/
    z = x & y;
    /*or*/
    k = x | y;
    /*xor*/
    m = x ^ y;
    /*shift right by 1*/
    l = x >> 1;
    /*shift left by 2*/
    n = y << 2;

    /*printing*/
    printf("\n");
    printf("and= %d.\n", z);
    printf("or= %d.\n", k);
    printf("xor= %d.\n", m);
    printf("shift right by 1: %d.\n", l);
    printf("shift left by 2: %d.\n", n);
    printf("\n");

    return 0;
}