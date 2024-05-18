#include <stdio.h>
#include <limits.h>

int main(void)
{
    int number = 0, max = INT_MIN;

    for (int i = 0; i < 3; i++)
    {
        printf("Please enter number-%d : ", i + 1);
        scanf("%d", &number);
        if (number > max)
        {
            max = number;
        }
    }
    printf("max = %d.", max);

    return 0;
}
