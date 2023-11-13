#include <stdio.h>

#define TRUE 1
#define FALSE 0

struct login
{
    char name[10];
    int ID;
    int Password;
};

int main(void)
{
    int user_id = 0, user_password = 0, no_of_tries = 1, registered_user = FALSE;

    struct login user[3] = {{"Ahmed", 1234, 7788}, {"Amr", 5678, 5566}, {"Wael", 9870, 1122}};

    printf("Please enter your ID: ");
    scanf("%d", &user_id);

    for (int i = 0; i < 3; i++)
    {
        if (user[i].ID == user_id)
        {
            registered_user = TRUE;
            printf("Please enter your password: ");

            for (no_of_tries = 1; no_of_tries <= 3; no_of_tries++)
            {
                scanf("%d", &user_password);
                if (user[i].Password == user_password)
                {
                    printf("Welcome %s.", user[i].name);
                    break;
                }
                if (no_of_tries == 3)
                {
                    printf("Incorrect password for 3 times, No more tries.\n");
                    break;
                }
                printf("Try Again : ");
            }
            break;
        }
    }

    if (registered_user == FALSE)
    {
        printf("you are not registered.\n");
    }

    return 0;
}