#include <stdio.h>

int main()
{
    int i = 0, j = 0, rows = 0;

    printf("Enter number of rows : ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = i; j < rows; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}