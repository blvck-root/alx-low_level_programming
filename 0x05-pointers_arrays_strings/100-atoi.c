#include "main.h"
#include <math.h>

/**
 * _atoi - converts a string to an integer
 * @s: string
 * Return: integer representation of a string
 */
int _atoi(char *s)
{
	int sign = 0;
	unsigned int i = 0;
	unsigned int p = 0;
	unsigned int n = 1;

	while (s[i] != '\0')
	{
		if (s[i] == '+')
		{
			sign++;
		}
		else if  (s[i] == '-')
		{
			sign--;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				if (p == 0)
					n = (int) s[i] - 48;
				else
					n = (n * 10)  + (int) s[i] - 48;
				p++;
				i++;
			}
			return (sign >= 0 ? n : -n);
		}
		i++;
	}
	return (0);
}

