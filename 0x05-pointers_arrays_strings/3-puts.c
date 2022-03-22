#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
int i = 0;
while (str[i])
{
putchar(str[i]);
i++;
}
putchar('\n');
}
