#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char start, e, q;

e='e';
q='q';
for (start = 'a'; start <= 'z'; start++)
{
if (start != 'e' && start != 'q')
{
putchar(start);
}
printf("\n");
}

return (0);
}
