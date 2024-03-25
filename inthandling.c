#include "main.h"
/**
 * handle_int - function to print an integer
 * @lol: argument
 * Return: integer
 */
int handle_int(va_list lol)
{
	int k = va_arg(lol, int);
	int num, final = k % 10, digit, exp = 1;
	int  i = 1;

	k = k / 10;
	num = k;

	if (final < 0)
	{
		_putchar('-');
		num = -num;
		k = -k;
		final = -final;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = k;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(final + '0');

	return (i);
}

/**
 * handle_dec - function to  print a decimal
 * @lol: Arguments
 * Return: integer
 */

int handle_dec(va_list lol)
{
	int k = va_arg(lol, int);
	int num, final = k % 10, digit;
	int  i = 1;
	int exp = 1;

	k = k / 10;
	num = k;

	if (final < 0)
	{
		_putchar('-');
		num = -num;
		k = -k;
		final = -final;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = k;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(final + '0');

	return (i);

