#include <cs50.h>
#include <stdio.h>

int GetLenght(long long i);
int GetArray(long long i, long long l, char from); //3rd parameter is for reusability without recursion
void CheckIfValid(int y[], int ysize);

int main(void)
{
    // X = divisor ex: 1000 // y = array // z = array pointer // i = input
    long long i = get_long_long("Number: ");
    long long l = GetLenght(i);
    if (l == 13 || l == 12 || l == 15 || l == 16)
    {
        //printf("Lenght of input is: %lli\n",l); //debug here
        GetArray(i, l, 'M');
    }
    else
    {
        printf("INVALID\n");
    }


}

// fucntions / methods starts here ..............................................
int GetLenght(long long i)
{
    //declaring variable
    long long x = 1;
    long long l = 0, x2;

    //algo for getting lenght of int input
    while (1)
    {
        x2 = i / x;
        l++;
        x = x * 10;
        //printf("x2 = %lli| i = %lli| x = %lli| z = %lli\n", x2, i, x, l); //debug here
        if (x2 >= 1 && x2 <= 9)
        {
            break;
        }
    }
    return l;
}

int GetArray(long long i, long long l, char from) // 3rd parameter: M = from main, C = CheckIfValid
{
    //setting up parameters for x
    long long x = 1;
    for (long long loop = 1; loop < l; loop++)
    {
        x = x * 10;
    }

    //declaring variable
    int y[l];
    long long z = 0;

    //process of getting the array from the input
    while (i != 0)
    {
        y[z] = i / x;
        i = i - (x * y[z]);
        z++;
        x = x / 10;
    }

    /*for (int loop = 0; loop < z; loop++)
    {
        printf("array #%i = %i|| ", loop, y[loop]);
    }
    printf("\n");*/

    //passing the array to a function that checks if it's a valid card number
    if (from == 'M')
    {
        int ysize = sizeof(y) / sizeof(y[0]);
        CheckIfValid(y, ysize);
    }
    else if (from == 'C')
    {
        return y[0] + y[1];
    }
    return 0;
}

void CheckIfValid(int y[], int ysize)
{
    int totalsum = 0;
    for (int even = (ysize - 2); even >= 0 ; even = even - 2)
    {
        if ((y[even] * 2) > 9)
        {
            int sum = (y[even] * 2);
            sum = GetArray(sum, 2, 'C');
            totalsum = totalsum + sum;
            continue;
        }
        totalsum = totalsum + (y[even] * 2);
        //printf("arraypointer#%i:totalsum = %i\n",even,totalsum);
    }
    for (int odd = (ysize - 1); odd >= 0; odd = odd - 2)
    {
        totalsum = totalsum + y[odd];
        //printf("arraypointer#%i:totalsum = %i\n",odd,totalsum);
    }

    if (totalsum % 10 == 0)
    {
        if (y[0] == 3)
        {
            if (y[1] == 4 || y[1] == 7)
            {
                printf("AMEX\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else if (y[0] == 4)
        {
            printf("VISA\n");
        }
        else if (y[0] == 5)
        {
            if (y[1] >= 1 && y[1] <= 5)
            {
                printf("MASTERCARD\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
    }
    else
    {
        printf("INVALID\n");
    }
}