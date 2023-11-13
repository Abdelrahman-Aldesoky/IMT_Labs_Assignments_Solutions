#include <stdio.h>
#include "STD_TYPES.h"

typedef struct
{
    s32 Salary;
    s32 Bonus;
    s32 Deduction;
    u8 Name[10];
} Company;

s32 Get_NumberOfEmployees(void);
void Populate_CompanyStruct(Company *employee, s32 Copy_NumberOfEmployees);
void Print_CompanyStruct(Company *employee, s32 Copy_NumberOfEmployees);

s32 main(void)
{
    s32 Local_TotalPayroll = 0;
    s32 Local_NumberOfEmployees = Get_NumberOfEmployees();
    Company employee[Local_NumberOfEmployees];
    Populate_CompanyStruct(employee, Local_NumberOfEmployees);
    //Print_CompanyStruct(employee,Local_NumberOfEmployees);
    for (s32 i = 0; i < Local_NumberOfEmployees; i++)
    {
        Local_TotalPayroll += (employee[i].Salary + employee[i].Bonus - employee[i].Deduction);
    }
    printf("Total Payroll = %d.", Local_TotalPayroll);
    return 0;
}

s32 Get_NumberOfEmployees(void)
{
    s32 Local_NumberOfEmployees = 0;
    while (Local_NumberOfEmployees <= 0)
    {
        printf("How many employees in the company can't be less than a zero : ");
        scanf("%d", &Local_NumberOfEmployees);
    }
    return Local_NumberOfEmployees;
}

void Populate_CompanyStruct(Company *employee, s32 Copy_NumberOfEmployees)
{
    for (s32 i = 0; i < Copy_NumberOfEmployees; i++)
    {
        printf("Please Enter Employee Name: ");
        scanf("%s", &employee[i].Name);
        printf("Please Enter %s Salary: ", employee[i].Name);
        scanf("%d", &employee[i].Salary);
        printf("Please Enter %s Bonus: ", employee[i].Name);
        scanf("%d", &employee[i].Bonus);
        printf("Please Enter %s Deduction: ", employee[i].Name);
        scanf("%d", &employee[i].Deduction);
    }
}

void Print_CompanyStruct(Company *employee, s32 Copy_NumberOfEmployees)
{
    for (s32 i = 0; i < Copy_NumberOfEmployees; i++)
    {
        printf("Employee name is %s.\n", employee[i].Name);
        printf("%s salary is %d.\n", employee[i].Name, employee[i].Salary);
        printf("%s Bonus is %d.\n", employee[i].Name, employee[i].Bonus);
        printf("%s Deduction is %d.\n", employee[i].Name, employee[i].Deduction);
    }
}