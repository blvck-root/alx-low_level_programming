#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates a program's CLI args
 * @ac: number of CLI args
 * @av: pointer to array of CLI args
 * Return: string of all args joined by \n
 */
char *argstostr(int ac, char **av)
{
	int size = 0;
	int i, j, k = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	/**
	 * allocate memory for each char in args including
	 * each \n char at the end of an arg and the \0 char
	 */
	for (i = 0; i < ac; i++)
		size += strlen(av[i]);

	s = (char *) malloc((size + ac + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	/* concatenate args */
	for (i = 0; i < ac; i++)
	{
		char *str = av[i];

		for (j = 0; (unsigned int) j < strlen(str); j++)
			s[k++] = str[j];
		s[k++] = '\n';
	}
	s[k] = '\0';

	return (s);
}
