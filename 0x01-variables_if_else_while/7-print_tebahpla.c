#include <stdio.h>
/**
 * main	- A program that prints lowercase alphabets in reverse
 *
 * Return:0
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
