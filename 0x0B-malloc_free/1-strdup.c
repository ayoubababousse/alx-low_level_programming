#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - duplicate a string in a new memory space location
* @str: the string to duplicate
*
* Return: a pointer to the duplicated string, or NULL if malloc fails
* or str is NULL
*/
char *_strdup(char *str)
{
char *new_str;
int len = 0;

if (str == NULL)
return (NULL);

/* Get the length of the string */
while (str[len])
len++;

/* Allocate memory for the new string */
new_str = malloc(sizeof(char) * (len + 1));

if (new_str == NULL)
return (NULL);

/* Copy the string into the new memory location */
for (int i = 0; i <= len; i++)
new_str[i] = str[i];

return (new_str);
}
