#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

float calc_hours(int hours[], int weeks, char output);

int main(void)
{
    int weeks = get_int("Number of weeks taking CS50: ");
    int hours[weeks];

    for (int i = 0; i < weeks; i++)
    {
        hours[i] = get_int("Week %i HW Hours: ", i);
    }

    char output;
    do
    {
        output = toupper(get_char("Enter T for total hours, A for average hours per week: "));
    }
    while (output != 'T' && output != 'A');

    printf("%.1f hours\n", calc_hours(hours, weeks, output));
}

// TODO: complete the calc_hours function
float calc_hours(int hours[], int weeks, char output)
{
    int total, x = 0;

    //calculation for the total of the array
    for (int i = x; i < weeks; i++)
    {
        total = total + hours[i];
        x++;
    }

    //if else statement to choose between average or totalsum to return
    if (output == 'T')
    {
        return total; //returns totalsum
    }
    else
    {
        return total / (float) x; //returns average
    }
}