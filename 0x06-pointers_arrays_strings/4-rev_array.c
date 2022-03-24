#include "main.h"
#include <stdio.h>

/**
 * void reverse_array(int *a, int n)  reverses content of an array of integer
 *
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
int i;
int j;
int tmp;

i = 0;
j = n - 1;

while (i < j)
{
tmp = a[i];
a[i] = a[j];
a[j] = tmp;
i++;
j--;
}
}
