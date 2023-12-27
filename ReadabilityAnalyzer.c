#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

// Count variables
int letterCount = 0;
int wordCount = 0;
int sentenceCount = 0;
int hasMultipleSpaces;
float index;

// Function prototypes
int countLetters(string text);
int countWords(string text);
int countSentences(string text);
float calculateLettersPer100Words(int letterCount, int wordCount);
float calculateSentencesPer100Words(int sentenceCount, int wordCount);

int main(void)
{
    string textInput;
    do
    {
        textInput = get_string("Text: \n");

        // Check for multiple spaces in the input
        for (int i = 0; i < strlen(textInput); i++)
        {
            hasMultipleSpaces = 0;
            if (textInput[i] == ' ' && textInput[i + 1] == ' ')
            {
                hasMultipleSpaces = 1;
                break;
            }
        }
    }
    while (textInput[0] == ' ' || textInput[strlen(textInput) - 1] == ' ' || hasMultipleSpaces || strlen(textInput) == 0);

    int letters = countLetters(textInput);
    int words = countWords(textInput);
    int sentences = countSentences(textInput);
    float averageLetters = calculateLettersPer100Words(letterCount, wordCount);
    float averageSentences = calculateSentencesPer100Words(sentenceCount, wordCount);

    index = 0.0588 * averageLetters - 0.296 * averageSentences - 15.8;
    int grade = (int)round(index);

    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade > 0 && grade < 16)
    {
        printf("Grade %i\n", grade);
    }
    else
    {
        printf("Grade 16+\n");
    }
}

// Counting the number of letters
int countLetters(string text)
{
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isalpha(text[i]))
        {
            letterCount += 1;
        }
    }
    return letterCount;
}

// Counting the number of words
int countWords(string text)
{
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == ' ')
        {
            wordCount += 1;
        }
    }
    wordCount++; // Increment for the last word
    return wordCount;
}

// Counting the number of sentences
int countSentences(string text)
{
    for (int i = 1; text[i] != '\0'; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentenceCount++;
        }
    }
    return sentenceCount;
}

// Calculate the average number of letters per 100 words
float calculateLettersPer100Words(int letterCount, int wordCount)
{
    return ((float)letterCount / wordCount) * 100;
}

// Calculate the average number of sentences per 100 words
float calculateSentencesPer100Words(int sentenceCount, int wordCount)
{
    return ((float)sentenceCount / wordCount) * 100;
}
