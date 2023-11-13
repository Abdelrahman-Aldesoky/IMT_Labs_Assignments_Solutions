#include <stdio.h>

int main(void)
{
    int height = 0;
    printf("Please enter the height of the pyramid : ");
    scanf("%d", &height);
    int cols = (height * 2) - 1;
    int mid = height;

    /*
    user input height = 4 or rows = 4 rows , mid of the triangle will be 4
    number of cols will be 7      (4*2)-1
    for the first asterisk
    j=       1234567
    i=1:        *         i=1,j>=4 && j<=4 , to get the relation j>=mid-(i-1) && j<mid+(i-1) which is j>=4-(1-1) && j<4+(1-1)
    i=2:       ***        i=2,j>=3 && j<=5 , to get the relation j>=mid-(i-1) && j<mid+(i-1) which is j>=4-(2-1) && j<4+(2-1)
    i=3:      *****       i=3,j>=2 && j<=6 , to get the relation j>=mid-(i-1) && j<mid+(i-1) which is j>=4-(3-1) && j<4+(3-1)
    i=4:     *******      i=4,j>=1 && j<=7 , to get the relation j>=mid-(i-1) && j<mid+(i-1) which is j>=4-(4-1) && j<4+(4-1)
    */

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if (j >= mid - (i - 1) && j <= mid + (i - 1))
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
    return 0;
}