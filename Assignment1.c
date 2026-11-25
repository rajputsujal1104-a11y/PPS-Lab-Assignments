#include <stdio.h>
#include <string.h>

int main()
{
    char email[50], password[50];

    printf("Enter Gmail ID: ");
    scanf("%s", email);

    printf("Enter Password: ");
    scanf("%s", password);

    if (strcmp(email, "student@gmail.com") == 0 &&
        strcmp(password, "12345") == 0)
    {
        printf("Login Successful!");
    }
    else
    {
        printf("Invalid Email or Password");
    }

    return 0;
}