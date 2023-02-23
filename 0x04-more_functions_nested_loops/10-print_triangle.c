#include "main.h"

/**
 * print_triangle - this is usd to prints a triangle
 * @size: size of triangle
 *Return: void
 */

void print_triangle(int size)
{
int i, s;

if (size <= 0)
_putchar('\n');
for (i = 1; i <= size; i++)
{
for (s = 1; s <= size; s++)
{
if (s <= (size - i))
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}

}
