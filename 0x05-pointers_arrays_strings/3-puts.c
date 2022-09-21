#include "main.h"

/**
 * _puts -> puts
 * @str: _puts funstion
 */
void _puts(char *str)

{
	while (*str != '\0')
	{

	_putchar(*str + 0);
	++str;

	}
	_putchar('\n');

}
