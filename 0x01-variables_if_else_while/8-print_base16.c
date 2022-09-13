#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int numbers;
char letters;

for (numbers = '0'; numbers <= '9'; numbers++)
putchar(numbers);
for (letters = 'a'; letters <= 'f'; letters++)
putchar(letters);
putchar('\n');

return (0);
}
