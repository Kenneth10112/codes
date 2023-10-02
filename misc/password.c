#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string password = get_string("Enter your password: ");
    int passwordlenght = strlen(password);

    bool upperexist = false;
    bool lowerexist = false;
    bool punctexist = false;
    bool numexist = false;

    for (int i = 0; i < passwordlenght; i++)
    {
        if (isupper(password[i]))
        {
            upperexist = true;
        }
        else if (islower(password[i]))
        {
            lowerexist = true;
        }
        else if (ispunct(password[i]))
        {
            punctexist = true;
        }
        else if (isdigit(password[i]))
        {
            numexist = true;
        }
    }

    if (upperexist == true && lowerexist == true && punctexist == true && numexist == true)
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol!\n");
    }
    return 0;
}