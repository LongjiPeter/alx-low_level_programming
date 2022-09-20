#include "main.h"

/**
 * _puts - updates the value it point to.
 * @str: charcter value
 */

void _puts(char *str)
{
int i;

for (i = 0; str[i] != 0; i++)
_putchar(str[i]);
_putchar('\n');
}
