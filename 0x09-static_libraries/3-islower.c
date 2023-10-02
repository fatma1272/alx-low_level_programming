#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * Description: This function takes an integer parameter c and
 * returns 1 if it is a lowercase letter, or 0 otherwise
 * @c: the character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
*/

int _islower(int c)
{

if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}

