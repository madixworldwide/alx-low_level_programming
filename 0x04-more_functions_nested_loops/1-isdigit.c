/* File: 1-isdigit.c */
#include "main.h"

/**
 * _isdigit - Checks if a character is a digit (0 through 9).
 * @c: The character to check.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
    return (c >= '0' && c <= '9') ? 1 : 0;
}

