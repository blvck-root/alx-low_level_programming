#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * strtow - splits a string into words
 * @str: string
 * Return: array of strings
 */
char **strtow(char *str)
{
	char **words, *astr, *word;
	int i, j, numwords = 0;

	if (str == NULL || strcmp(str, "") == 0)
		return (NULL);
	i = 0;
	while (str[i++] != '\0')
	{
		if (str[i - 1] != ' ' && (str[i] == ' ' || str[i] == '\0'))
			numwords++;
	}
	words = (char **) malloc(++numwords * sizeof(*words));
	if (words == NULL)
	{
		free(words);
		return (NULL);
	}
	/* strtok can't work with string literals convert to char* */
	astr = malloc(strlen(str) * sizeof(str[0]));
	strcpy(astr, str);
	word = strtok(astr, " ");
	i = 0;
	while (word != NULL)
	{
		words[i] = malloc(strlen(word) * sizeof(astr[0]));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		words[i++] = word;
		word = strtok(NULL, " ");
	}
	words[i] = NULL;
	return (words);
}
