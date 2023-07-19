#include "main.h"
#include <stdio.h> // Add the include directive for stdio.h to access _putchar

/**
 * print_alphabet_x10 - Print lowercase alphabet 10 times
 */
void print_alphabet_x10(void)
{
    char num, letter;

    for (num = 0; num < 10; num++) // Fix the loop condition to avoid printing the letter 'z' 11 times
    {
        for (letter = 'a'; letter <= 'z'; letter++)
        {
            _putchar(letter); // Assuming _putchar is defined elsewhere
        }
        _putchar('\n');
    }
}

