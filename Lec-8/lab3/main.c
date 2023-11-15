#include <stdio.h>
#include "STD_TYPES.h"

typedef struct
{
    u8 Student_ID;
    s32 Language_Grade;
    s32 Math_Grade;
    s32 Physics_Grade;
    s32 Chemistry_Grade;
    u8 Student_Name[10];
} School;

s32 Get_NumberOfStudents(void);
void Populate_SchoolStruct(School *Student, s32 Copy_NumberOfStudents);
u8 Print_Student_Grades(School *Student, s32 Copy_NumberOfStudents, s32 Copy_StudentID);

s32 main(void)
{
    s32 Local_StudentID = 0, Local_StudentExists = FALSE;
    s32 Local_NumberOfStudents = Get_NumberOfStudents();
    School Student[Local_NumberOfStudents];
    Populate_SchoolStruct(Student, Local_NumberOfStudents);
    printf("Please Enter Student ID That You Want To Check His Grades: ");
    scanf("%d", &Local_StudentID);
    Local_StudentExists = Print_Student_Grades(Student, Local_NumberOfStudents, Local_StudentID);
    if (!Local_StudentExists)
    {
        printf("Student ID does not exist.\n");
    }
    return 0;
}

s32 Get_NumberOfStudents(void)
{
    s32 Local_NumberOfStudents = 0;
    while (Local_NumberOfStudents <= 0)
    {
        printf("How many Students in the School can't be less than a zero : ");
        scanf("%d", &Local_NumberOfStudents);
    }
    return Local_NumberOfStudents;
}

void Populate_SchoolStruct(School *Student, s32 Copy_NumberOfStudents)
{
    for (s32 i = 0; i < Copy_NumberOfStudents; i++)
    {
        printf("Please Enter Student Name: ");
        scanf("%s", &Student[i].Student_Name);
        printf("Please Enter %s Student ID: ", Student[i].Student_Name);
        scanf("%d", &Student[i].Student_ID);
        printf("Please Enter %s Language Grade: ", Student[i].Student_Name);
        scanf("%d", &Student[i].Language_Grade);
        printf("Please Enter %s Math Grade: ", Student[i].Student_Name);
        scanf("%d", &Student[i].Math_Grade);
        printf("Please Enter %s Physics Grade: ", Student[i].Student_Name);
        scanf("%d", &Student[i].Physics_Grade);
        printf("Please Enter %s Chemistry Grade: ", Student[i].Student_Name);
        scanf("%d", &Student[i].Chemistry_Grade);
    }
}

u8 Print_Student_Grades(School *Student, s32 Copy_NumberOfStudents, s32 Copy_StudentID)
{
    u8 Local_StudentExists = FALSE;
    for (s32 i = 0; i < Copy_NumberOfStudents; i++)
    {
        if (Student[i].Student_ID == Copy_StudentID)
        {
            Local_StudentExists = TRUE;
            printf("Student name is %s.\n", Student[i].Student_Name);
            printf("%s Language Grade is %d.\n", Student[i].Student_Name, Student[i].Language_Grade);
            printf("%s Math Grade is %d.\n", Student[i].Student_Name, Student[i].Math_Grade);
            printf("%s Physics Grade is %d.\n", Student[i].Student_Name, Student[i].Physics_Grade);
            printf("%s Chemistry Grade is %d.\n", Student[i].Student_Name, Student[i].Chemistry_Grade);
            break;
        }
        else
        {
            Local_StudentExists = FALSE;
        }
    }
    return Local_StudentExists;
}