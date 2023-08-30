#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - a function to printf the charachter passed
 * @s - a charchter to print
 * return 0 (success)
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
int main(void)
{
	_puts_recursion("Puts with recursion");
	return (0);
}
