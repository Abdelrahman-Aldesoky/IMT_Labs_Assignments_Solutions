#include <stdio.h>
#include "BIT_MATH.h"
#include "STD_TYPES.h"

int main(void)
{
    u32 x = 0;

    printf("Original value of x is %d\n", x);

    /* Set first bit */
    SET_BIT(x, 0);
    printf("x value after setting first bit is %d\n", x);

    /* Clear first bit */
    CLR_BIT(x, 0);
    printf("x value after clearing first bit is %d\n", x);

    /* Toggle first bit */
    TOG_BIT(x, 0);
    printf("x value after toggling first bit is %d\n", x);
    return 0;
}