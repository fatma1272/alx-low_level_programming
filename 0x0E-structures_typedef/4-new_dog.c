#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: Pointer to string
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
int len = 0;

while (s[len] != '\0')
len++;
return (len);
}
