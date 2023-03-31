#include <unistd.h>

/**
 * _putchar - writes the character c to stdio
 * @c: the character to print
 *
 * Return: on success 1.
 * on error, -1 is returned. and errnois set appropriatly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
