#include "main.h"

/**
 * largest number function returns the latgest amongst three numbers
 * Return: largest number
 */

int largest_number(int a,int b,int c)
{
int largest;
if (a > b && a > c)
{
largest = a;
}
else if (b > a && b > c)
{
largest = b;
}
else
{
largets = c;
}

return (largest);
}
