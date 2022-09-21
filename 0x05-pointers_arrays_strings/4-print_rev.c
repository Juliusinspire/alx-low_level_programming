#include  "main.h"
#include <string.h>

/**
 * print_rev -> printing a string
 * @s: the string to be printes
 */
void print_rev(char *s)

{

	int index;


     /*finds the length of string without null character*/

	for (index = 0; s[index] != '\0'; ++index)
	;


     /*print char from the last index as you decrement*/
	for (--index; index >= 0; --index)
	_putchar(s[index]);
	_putchar('\n');

}
