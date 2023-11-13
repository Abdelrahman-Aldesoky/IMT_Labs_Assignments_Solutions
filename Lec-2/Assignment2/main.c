#include <stdio.h>

int main(void)
{
    int ID = 1234, Password = 5678;
    int user_id, user_password;

    printf("Please enter ID: \n");
    scanf("%d", &user_id);

    if (user_id == ID)
    {
        printf("Please enter Password: \n");
        scanf("%d", &user_password);

        if (user_password == Password)
        {
            printf("ID=%d. Password=%d.\n", user_id, user_password);
        }
        else
        {
            printf("incorrect password\n");
        }
    }
    else
    {
        printf("incorrect id");
    }
}