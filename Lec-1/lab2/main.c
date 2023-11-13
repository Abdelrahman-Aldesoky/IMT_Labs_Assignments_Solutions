#include <stdio.h>

int main(void)
{
    int x = 0;
    printf("Please enter a number:\n");
    scanf("%d", &x);
    printf("You entered: ");
    printf("%d\n", x);
    return 0;
}