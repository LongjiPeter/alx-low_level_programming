#include "main.h"

/**
 * print_rev - prints a string in reverse and then a new line
 * @s: character value
 */

void print_rev(char *s)
{
int i;
for (i = 0; s[i] != 0; i++)
;
i = i - 1;
while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
