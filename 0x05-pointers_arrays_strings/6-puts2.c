#include "main.h"

/**
 * puts2 - prints 1 out of 2 characters in a string
 * @str: character value
 */
void puts2(char *s)
{
int i, a;
for (i = 0; str[i] != "\0"; i++)
;
for (a = 0; a < i; a += 2)
_putchar(str[a]);
_putchar('\n');
}
