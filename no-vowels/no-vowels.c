// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    int numberofcommandarguments = argc;

     //returns error if there's no command line input
    //detecs no command line by using argc, argc = no. command line arguments
    if (numberofcommandarguments == 2)
    {
         //start of the process of returning/printing the converted string
        //the if else statements are for detecting what the vowels are and replacing them.
        for (int i = 0, stringlenghtofinput = strlen(argv[numberofcommandarguments - 1]) ; i < stringlenghtofinput; i++)
        {
            if (argv[1][i] == 65 || argv[1][i] == (65 + 32))
            {
                printf("6");
            }
            else if (argv[1][i] == 69 || argv[1][i] == (69 + 32))
            {
                printf("3");
            }
            else if (argv[1][i] == 73 || argv[1][i] == (73 + 32))
            {
                printf("1");
            }
            else if (argv[1][i] == 79 || argv[1][i] == (79 + 32))
            {
                printf("0");
            }
            else
            {
                printf("%c", argv[1][i]);
            }
        }
    }
    //returns 0 since there's exactly one command line argument
    else
    {
        printf("error no command line argument detected\n");
        return 1;
    }
}
