#include "holberton.h"

/**
* _memcpy - Copies memory
*@dest: pointer to memory
*@src: pointer to source to copy
*@n: bytes of memory area
* Return: s
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
