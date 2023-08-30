#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - a function to print charachters recursively
 * @s: a pointer to a charachter to be printed
 * return void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
	}
	_puts_recursion(s + 1);
}
