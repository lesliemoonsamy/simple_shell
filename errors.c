#include "shell.h"
/**
 * _eputs - prints string as an input
 * @str: To be printed string
 *
 * Return: None
 */
void _eputs(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}
/**
 * _eputchar - The character of c to stderr is written
 * @c: To print the character
 * Return: Return: 1 on success
 * Error, Return -1
 */
int _eputchar(char c)
{
	static int 1;
	static char buf[write_buf_size];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0,

