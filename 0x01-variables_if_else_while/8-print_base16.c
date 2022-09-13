#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * return: always 0 (success)
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
