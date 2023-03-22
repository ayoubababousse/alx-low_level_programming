#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - Prints all natural numbers from n to 98, followed by a new line
 * @n: Starting point for printing
 *
 * Return: void
 */
void print_to_98(int n)
{
printf("%d", n);

if (n > 98)
{
for (; n > 98; n--)
printf(", %d", n - 1);
}
else
{
for (; n < 98; n++)
printf(", %d", n + 1);
}

printf("\n");
}
