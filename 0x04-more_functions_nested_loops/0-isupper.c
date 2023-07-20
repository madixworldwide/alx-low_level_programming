#include "main.h"

/**
 * _isupper - Check if a letter is uppercase.
 * @c: The character to be checked.
 * Return: 1 if it's an uppercase letter, 0 otherwise.
 */
int _isupper(int c) 
{
    // Uppercase letters have ASCII values from 65 to 90
    if (c >= 'A' && c <= 'Z') 
    {       
        return 1;
    }
    return 0;
}
	
