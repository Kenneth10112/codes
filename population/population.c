#include <cs50.h>
#include <stdio.h>

int PopulationCalculation(int gain, int lose);

int main(void)
{
    // TODO: Prompt for start size
    int def = 0;
    int start, end;
    do
    {
        start = get_int("Year Start: ");

    }
    while (start < 9);
    // TODO: Prompt for end size
    do
    {
        end = get_int("Year end: ");

    }
    while (end < start);
    // TODO: Calculate number of years until we reach threshold
    if (start == end)
    {
        printf("Years: %d", def);
        return 0;
    }

    int year_needed = PopulationCalculation(start, end);

    // TODO: Print number of years
    printf("Years: %d ", year_needed);
}

int PopulationCalculation(int population, int end_population)
{
    float gain, lose;
    int yield, year;
    for (year = 0; population < end_population; year++)
    {
        gain = population / 3;
        lose = population / 4;
        yield = gain - lose;
        population += yield;
    }
    return year;
}
