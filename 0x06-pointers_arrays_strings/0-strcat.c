#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * char *_strcat(char *dest, char *src) concatenates two strings.
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
j = 0;

while (dest[i] != '\0')
i++;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
	  
