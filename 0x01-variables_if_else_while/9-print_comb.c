#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'and that piece of art is useful" - Dora Korpar, 2015-10-19'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
for (ch = 0; ch <= 9; ch++)
{
putchar(ch + '0');
if (ch < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
