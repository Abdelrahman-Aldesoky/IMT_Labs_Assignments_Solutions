#include <stdio.h>

#define ADD '+'
#define SUBTRACT '-'
#define MULTIPLY '*'
#define DIVIDE '/'
#define AND '&'
#define OR '|'
#define NOT '~'
#define XOR '^'
#define REMINDER '%'
#define INCREMENT 'i'
#define DECREMENT 'd'

int Add(int Copy_FirstNumber, int Copy_SecondNumber);
int Subtract(int Copy_FirstNumber, int Copy_SecondNumber);
int Multiply(int Copy_FirstNumber, int Copy_SecondNumber);
float Divide(int Copy_FirstNumber, int Copy_SecondNumber);
int And(int Copy_FirstNumber, int Copy_SecondNumber);
int Or(int Copy_FirstNumber, int Copy_SecondNumber);
int Xor(int Copy_FirstNumber, int Copy_SecondNumber);
int Reminder(int Copy_FirstNumber, int Copy_SecondNumber);
int Increment(int Copy_Number);
int Decrement(int Copy_Number);
int Not(int Copy_Number);

int main(void)
{
    int Local_FirstNumber = 0, Local_SecondNumber = 0;
    char operation = 0;
    printf("Please enter an operation Choices are : [+,-,*,/,&,|,~,^,%%,i,d].\n");
    scanf("%c", &operation);

    if (operation == INCREMENT || operation == DECREMENT || operation == NOT)
    {
        printf("Please Enter a number: ");
        scanf("%d", &Local_FirstNumber);
    }
    else
    {
        printf("Please Enter First Number: ");
        scanf("%d", &Local_FirstNumber);
        printf("Please Enter Second Number: ");
        scanf("%d", &Local_SecondNumber);
    }

    switch (operation)
    {
    case ADD:
        printf("Addition = %d\n", Add(Local_FirstNumber, Local_SecondNumber));
        break;
    case SUBTRACT:
        printf("Subtraction = %d\n", Subtract(Local_FirstNumber, Local_SecondNumber));
        break;
    case MULTIPLY:
        printf("Multiplication = %d\n", Multiply(Local_FirstNumber, Local_SecondNumber));
        break;
    case DIVIDE:
        printf("Division = %.1f\n", Divide(Local_FirstNumber, Local_SecondNumber));
        break;
    case AND:
        printf("AND = %d\n", And(Local_FirstNumber, Local_SecondNumber));
        break;
    case OR:
        printf("OR = %d\n", Or(Local_FirstNumber, Local_SecondNumber));
        break;
    case XOR:
        printf("XOR = %d\n", Xor(Local_FirstNumber, Local_SecondNumber));
        break;
    case REMINDER:
        printf("Reminder = %d\n", Reminder(Local_FirstNumber, Local_SecondNumber));
        break;
    case INCREMENT:
        printf("Increment = %d\n", Increment(Local_FirstNumber));
        break;
    case DECREMENT:
        printf("Decrement = %d\n", Decrement(Local_FirstNumber));
        break;
    case NOT:
        printf("Compliment = %d\n", Not(Local_FirstNumber));
        break;
    default:
        printf("Not a valid Operation.\n");
        break;
    }
    return 0;
}

int Add(int Copy_FirstNumber, int Copy_SecondNumber)
{
    return Copy_FirstNumber + Copy_SecondNumber;
}
int Subtract(int Copy_FirstNumber, int Copy_SecondNumber)
{
    return Copy_FirstNumber - Copy_SecondNumber;
}
int Multiply(int Copy_FirstNumber, int Copy_SecondNumber)
{
    return Copy_FirstNumber * Copy_SecondNumber;
}
float Divide(int Copy_FirstNumber, int Copy_SecondNumber)
{
    return (float)Copy_FirstNumber / Copy_SecondNumber;
}
int And(int Copy_FirstNumber, int Copy_SecondNumber)
{
    return Copy_FirstNumber & Copy_SecondNumber;
}
int Or(int Copy_FirstNumber, int Copy_SecondNumber)
{
    return Copy_FirstNumber | Copy_SecondNumber;
}
int Xor(int Copy_FirstNumber, int Copy_SecondNumber)
{
    return Copy_FirstNumber ^ Copy_SecondNumber;
}
int Reminder(int Copy_FirstNumber, int Copy_SecondNumber)
{
    return Copy_FirstNumber % Copy_SecondNumber;
}
int Increment(int Copy_Number)
{
    return ++Copy_Number;
}
int Decrement(int Copy_Number)
{
    return --Copy_Number;
}
int Not(int Copy_Number)
{
    return ~Copy_Number;
}