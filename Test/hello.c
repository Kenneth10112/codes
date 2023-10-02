#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("what is your name? ");
    string answer2 = get_string("what is your age? ");
    printf("hello, %s and your age is %s\n",answer,answer2);
}