#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}
	char *result = malloc(len1 + n + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strncat(result, s2, n);

	return (result);
}
