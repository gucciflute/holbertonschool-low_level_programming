#include "holberton.h"

/**
* print_rev - Displays string in reverse
* @s: Contains string
*/

void print_rev(char *s)
{
int a;

for (a = 0 ; s[a] != '\0'; a++)
;
for (; a >= 0 ; a--)
{
_putchar(s[a]);
}
_putchar('\n');
}