#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of char
 * @size: size of the array
 * @c: char to be printed
 *
 * Return: NULL or the array.
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		array[i] = c;
	array[i] = '\0';
	return (size < 1 ? '\0' : array);
}
