#include "main.h"
/**
 * _puts_recursion - function like puts ();
 * @s: input
 * Return: Always 0 (success)
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s +1);
	}

	else
		_putchar('\n');
}
