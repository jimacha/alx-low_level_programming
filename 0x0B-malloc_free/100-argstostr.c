#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates arguments
 * @ac: av
 * @av: av
 *
 * Return: Pointer to the new string , NULL (Error)
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, l;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			l++;
		l++;
	}

	s = malloc(sizeof(char) * (l + 1));

	if (s == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	return (s);
}
