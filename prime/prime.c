#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Mini: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    if (number == 1)
    {
        return false;
    }

    int divisor, factors = 0;
    for (divisor = 1; divisor <= number; divisor++)
    {
        if (number % divisor == 0)
        {
            factors++;
        }
    }
    if (factors <= 2)
    {
        return true;
    }
    else
    {
        return false;
    }

}
