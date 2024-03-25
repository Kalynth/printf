#include "main.h"
/**
 * handle_string - function to print a string
 * @lol: varaible to take arguments
 * Return: string length
 */
int handle_string(va_list lol)
{
	char *k;
	int i;
	int size;

	k = va_arg(lol, char *);
	if (k == NULL)
	{
		k = "(null)";
		size = _strlen(k);
		for (i = 0; i < size; i++)
			_putchar(k[i]);
		return (size);
	}
	else
	{
		size = _strlen(k);
		for (i = 0; i < length; i++)
			_putchar(k[i]);
		return (size);
	}
}
