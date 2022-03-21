#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
int len;
s = "My first strlen!";
len = strlen(s);
putchar(len);
return (0);
}
