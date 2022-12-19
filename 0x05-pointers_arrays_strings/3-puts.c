#include <stdio.h>
#include "main.h"

/**
* _puts - function that prints a string, followed by a new line, to stdout
* @str: pointer value
* Return: Always 0 (Success)
*/

void _puts(char *str)
{
	for (int i =0; i<str.length();i++) {
		_putchar(str[i]);
	}
	_putchar('\n');
}
