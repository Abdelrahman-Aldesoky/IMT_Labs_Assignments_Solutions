#include <stdio.h>

int main(void)
{
    int working_hours = 0, salary = 0, hourly_rate = 50;
    float deduction_rate = 0.1;

    /*taking user input*/
    printf("Please enter your working hours: \n");
    scanf("%d", &working_hours);

    /*if working hours greater than or equal 40*/
    if (working_hours >= 40)
    {
        /*salary = working hours x hourly rate*/
        salary = working_hours * hourly_rate;
        /*output*/
        printf("salary with no deduction =%d.", salary);
    }
    else if (working_hours > 0)
    {
        /*salary = working hours  x hourly rate*/
        salary = (working_hours * hourly_rate);
        /*salary = salary-(salary*0.1) which is 10% deduction*/
        salary -= (salary * deduction_rate);
        /*output*/
        printf("salary after deduction =%d.", salary);
    }
    else
    {
        printf("Invalid Working Hours\n");
    }

    return 0;
}