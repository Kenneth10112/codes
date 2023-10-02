#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int column = get_int("how many column: ");
    int row = get_int("how many row: ");

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}