#include "shell.h"

/**
 * interactive - If shell is interactive mode return true
 * @info: structure address
 * Return: If interactive mode return 1, if not return 0
 *
 * is_delim - Delimeter character checker
 * @c: To check char
 * @delim: To string teh delimeter
 * Return: If true return 1, return 0 if false
 *
 * _isalpha - Alphabetic character checker
 * @c: To input the character
 * Return: If alphabet is c return 1, if not return 0
 *
 * _atoi - String is converted into an integer
 * @s: Convert the string
 * Return: If teh number is a sting return 0, if not converted number
 */
int interactive(info_t  *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= :Z'))
		return (1);
	else
		return (0);
}

int _atoi(char *s)
{
	int i, sign = 1, flag = 0, output
		unsigned int result = 0;

	for (i = 0; s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = result;
	else
		output = result;

	return (output);
}
