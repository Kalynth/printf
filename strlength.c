#include "main.h"

/**
 * _strlen -  function to print length of string
 * @k: string
 * Return: Integer
 */

int _strlen(char *k)
{
	int z;

	for (z = 0; k[z] != 0; z++)
		;
	return (z);

}

/**
 * _strlenc - length of constant characters
 * @k: string
 * Return: integer
 */

int _strlenc(const char *k)
{
	int z;

	for (z = 0; k[z] != 0; z++)
		;
	return (z);
}
