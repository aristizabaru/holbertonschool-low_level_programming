#include "holberton.h"

/**
 * array_range - creates an array of integers
 * @min: min number to count from
 * @max: max number to count to
 *
 * Return: pointer to array
 * if fails return NULL
 */
int *array_range(int min, int max)
{
	int *p = NULL;
	int i;
	int length = max - min;

	/*check arguments*/
	if (min > max)
		return (NULL);
	/*allocate memory*/
	p = malloc(sizeof(*p) * length + 1);
	/*check fail*/
	if (p == NULL)
		return (NULL);
	/*populate memory from min to max*/
	for (i = 0; i <= length; i++, min++)
		p[i] = min;

	return (p);
}
