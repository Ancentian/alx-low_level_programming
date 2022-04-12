#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
if (d->name != NULL)
{
printf("Name: %s\n", d->name);
} else {
printf("Name: (nil)\n");
}
if (d->owner)
{
printf("Owner: %s\n", d->owner);
} else {
printf("Owner: (nil)\n");
}
  
}
