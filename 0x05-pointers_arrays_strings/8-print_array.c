#include <stdio.h>
#include "main.h"

/**
 * void print_array(int *a, int n)  prints n elements of an array of integers
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
  
int i;

for (i = 0; i < n; i++)
{
if (i == 0)
putchar(a[i]);
else
putchar(a[i]);
}
putchar('\n');
}
