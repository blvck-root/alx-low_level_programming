#include "main.h"
#include <string.h>

int palindrome_helper(char *s, char *t);

/**
 * is_palindrome - checks if a string is the same as its reverse
 * @s: string
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	return (palindrome_helper(&s[0], &s[strlen(s) - 1]));
}

/**
 * palindrome_helper - is_palindrome function helper
 * @s: pointer to start of a string
 * @t: pointer to end of a string
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int palindrome_helper(char *s, char *t)
{
	if (*s == '\0')
		return (1);
	else if (*s != *t)
		return (0);
	return (palindrome_helper(++s, --t));
}
