#include <stdio.h>

int main(void)
{
    int arr[10];
    int sum = 0;
    float average = 0;

    printf("Please enter 10 elements in the array :\n");
    for (int i = 0; i < 10; i++)
    {
        printf("element - %d : ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = (float)sum / 10;
    printf("sum= %d\n", sum);
    printf("average= %.1f", average);
    return 0;
}