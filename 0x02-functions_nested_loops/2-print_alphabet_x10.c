#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase followed by a new line.
 */
void print_alphabet_x10(void)
{
    char letter;
    int num;

    for (num = 0; num < 10; num++)
    {
        for (letter = 'a'; letter <= 'z'; letter++)
        {
            _putchar(letter);
        }
        // Instead of using _putchar('\n'), we can use the newline character directly
        // since it doesn't involve using _putchar again.
        putchar('\n');
    }
}

