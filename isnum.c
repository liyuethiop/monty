#include "monty.h"
/**
 * isnum - check if the arg is a number
 * @s: pointer
 * Return: 1 for success or -1
 */
int isnum(char *s)
{
	size_t i;

	i = 0;
	if (!s)
	{
		return (-1);
	}
	if (*s == '-' || *s == '+')
	{
		s++;
		i++;
	}
	if (*s == '\0')
	{
		return (-1);
	}
	for (; i < strlen(s); i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (-1);
	}
	return (1);
}
