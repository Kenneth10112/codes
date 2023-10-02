#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int count_letters(string sentence);
int count_word(string sentence);
int count_sentence(string sentence);

int main(void)
{
    string sentence = get_string("Enter something: ");
    int sentencecount = count_sentence(sentence);
    int wordcount = count_word(sentence);
    int lettercount = count_letters(sentence);

    //calculation || index = 0.0588 * (letters / words * 100) - 0.296 * (sentence / words * 100) - 15.8
    //index = 0.0588 * L - 0.296 * S - 15.8
    float L = (((float)lettercount / (float)wordcount) * 100);
    float S = (((float)sentencecount / (float)wordcount) * 100);
    float index = 0.0588 * L - 0.296 * S - 15.8;
    //printf("L = %f| S = %f\n", L,S);

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %0.f\n", index);
    }

}

int count_letters(string sentence)
{
    int lenght = strlen(sentence);
    int alphanumletters = 0;
    for (int i = 0; i < lenght; i++)
    {
        if (isalnum(sentence[i]))
        {
            alphanumletters = alphanumletters + 1;
        }
    }
    return alphanumletters;
}

int count_word(string sentence)
{
    int lenght = strlen(sentence);
    int words = 0;
    for (int i = 0; i < lenght; i++)
    {
        if (isspace(sentence[i]))
        {
            words = words + 1;
        }
    }
    return words + 1;
}

int count_sentence(string sentence)
{
    int lenght = strlen(sentence);
    int sentences = 0;
    for (int i = 0; i < lenght; i++)
    {
        if (sentence[i] == '.' || sentence[i] == '?' || sentence[i] == '!')
        {
            sentences = sentences + 1;
        }
    }
    return sentences;
}