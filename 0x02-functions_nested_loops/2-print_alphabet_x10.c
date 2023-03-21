#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times, followed by a new line each time
 */
void print_alphabet_x10(void)
{
int i;
char c;

for (i = 0; i < 10; i++)
{
c = 'a';

while (c <= 'z')
{
_putchar(c);
c++;
}

_putchar('\n');
}
}
