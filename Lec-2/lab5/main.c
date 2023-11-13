#include <stdio.h>

#define AHMED 1234
#define YOUSSEF 5678
#define MINA 1145

int main(void)
{
    int ID = 0;
    /*user input*/
    printf("Please enter your ID: \n");
    scanf("%d", &ID);

    /*switch case on the ID entered by the user*/
    switch (ID)
    {
    case AHMED:
        printf("Welcome Ahmed\n");
        break;
    case YOUSSEF:
        printf("Welcome Youssef\n");
        break;
    case MINA:
        printf("Welcome Mina");
        break;
    default:
        printf("Wrong ID\n");
        break;
    }

    return 0;
}
