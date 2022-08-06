#include "main.h"

/**
 * _putchar - writes the charcters c to stdout
 * @c: the character to be print
 *
 * Return: On success 1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
