#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: character value
 *
 * Return: i
 */

int _strlen(char *s)
{
int i;

for (i = 0; s[i] != 0; i++)
;
return (i);
}
