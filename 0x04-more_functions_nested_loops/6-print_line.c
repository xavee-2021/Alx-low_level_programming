#include "holberton.h"

/**
 * print_line - check the code for ALX School students.
 *
 *@n: parameter parsed
 *
 * Return: Always 0.
 */
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
if (n > 0)
{
_putchar('_');
}
}
_putchar('\n');
return;
}
