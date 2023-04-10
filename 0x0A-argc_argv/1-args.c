#include <stdio.h>

/**
* main - prints the number of arguments passed to the program
*
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Always 0 (Success)
*
* Description: This function prints the number of arguments passed
* to the program.
*/
int main(int argc, char *argv[])
{
int i;
(void) argv; /* Ignore unused parameter */

for (i = 0; i < argc; i++)
{
;
}
printf("%d\n", i - 1);
return (0);
}
