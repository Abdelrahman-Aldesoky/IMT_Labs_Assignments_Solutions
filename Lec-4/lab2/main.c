#include <stdio.h>

// void swap(int *Pointer_x,int *pointer_y);

// int main(void)
// {
//     int x=10,y=20;
//     printf("Before swap X=%d.\n",x);
//     printf("Before swap Y=%d.\n",y);
//     swap(&x,&y);
//     printf("After swap X=%d.\n",x);
//     printf("After swap Y=%d.\n",y);
//     return 0;
// }

// void swap(int *Pointer_x,int *pointer_y)
// {
//     int Local_Temp=0;
//     Local_Temp=*Pointer_x;
//     *Pointer_x=*pointer_y;
//     *pointer_y=Local_Temp;
// }

void swap(void);
int x = 10, y = 20;
int main(void)
{
    printf("Before swap x=%d.\n", x);
    printf("Before swap y=%d.\n", y);
    swap();
    printf("After swap x=%d.\n", x);
    printf("After swap y=%d.\n", y);
    return 0;
}

/*not a good function for readability*/
// void swap(void)
// {
//     x = x + y; /*x=10+20  x equals 30 now, x holds both values of x and y*/
//     y = x - y; /*y=30-20  y equals 10 now swapped, subtracted value of y from x i get the value of y in x "swap"*/
//     x = x - y; /*x=30-10  x equals 20 now swapped*/
// }

void swap(void)
{
    int temp=0;
    temp=x;
    x=y;
    y=temp;
}