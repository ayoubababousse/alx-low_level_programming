#include "main.h"

/**
 * _islower - Checkes for lowercase character
 * @c: The character to be checket
 * Return 1 for lowercase or 0 for anything else
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
        return (1);
}  
else
{
return (0);
}
}

