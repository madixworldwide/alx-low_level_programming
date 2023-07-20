/**
 * _isupper - Check if a character is uppercase.
 * @c: The character to be checked.
 * Return: 1 if it's an uppercase character, 0 otherwise.
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
	
