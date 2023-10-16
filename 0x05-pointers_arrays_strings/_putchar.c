#include <unistd.h>

/**
 * _putchar - write a character to the standard output
 * @c: The character to be written
 *
 * Return: On success, 1. On error, -1 is returned.
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}
