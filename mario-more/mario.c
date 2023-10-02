#include <cs50.h>
#include <stdio.h>

void printhash(int hash)
{
    for (int i = 0; i < hash; i++)
    {
        printf("#");
    }
}

void printspace(int space)
{
    for (int i = 0; i < space; i++)
    {
        printf(" ");
    }
}

int main(void)
{
    int height = get_int("Height?: (up until 50 only) ");

    while (height < 1 || height > 8)
    {
        height = get_int("Height?: (up until 50 only) ");
    }

    int hash = 1, space = height - 1;
    for (int i = 0; i < height; i++)
    {
        printspace(space);
        printhash(hash);
        printf("  ");
        printhash(hash);
        printf("\n");

        hash++;
        space--;
    }
    return 0;
}