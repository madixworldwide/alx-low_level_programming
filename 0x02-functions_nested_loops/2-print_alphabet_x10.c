#include "main.h"
#include <stdio.h> 

/**
 * 
 */
void print_alphabet_x10(void)
{
    char num, letter;

    for (num = 0; num < 10; num++) 
    {
        for (letter = 'a'; letter <= 'z'; letter++)
        {
            _putchar(letter);
        }
        _putchar('\n');
    }
}
