#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - copies the string given as parameter
 * @str: string to duplicate
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, j;

	i = 0;
	j = 0;

	if (str == NULL)
		return (NULL);

	while (str[j])
		j++;
	duplicate = malloc(sizeof(char) * (j + 1));

	if (duplicate == NULL)
		return (NULL);

	while ((duplicate[i] = str[i]) != '\0')
		i++;

	return (duplicate);
}
