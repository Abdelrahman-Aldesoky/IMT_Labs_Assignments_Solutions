#include <stdio.h>

int main()
{
    printf("your name\n");
    return 0;
}

// GCC commands to generate the required files:
// 1. Intermediate (.i) file: gcc -E main.c -o main.i
// 2. Assembly (.s) file: gcc -S main.c -o main.s
// 3. Object (.o) file: gcc -c main.c -o main.o
// 4. Executable file: gcc main.c -o main
