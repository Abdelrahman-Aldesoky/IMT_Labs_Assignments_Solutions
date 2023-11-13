#include <stdio.h>

int main(void)
{
    int columns = 6, rows = 5;
    int mid = columns / 2;

    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= columns; j++)
        {
            if (i == rows || j == rows - i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}