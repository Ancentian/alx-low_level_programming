#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * int _strcmp(char *s1, char *s2) compares two strings.
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
int i;
int result;

i = 0;

while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
{
i++;
}
result = s1[i] - s2[i];
return (result);
}
