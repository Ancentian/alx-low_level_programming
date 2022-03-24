#include "main.h"
#include <stdio.h>

/**
 * char *string_toupper(char *) changes all lowercase letters to uppercase.
 *
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] -= 32;
}
return (s);
}
