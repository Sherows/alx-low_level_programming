#include <unistd.h>

/**
 * this writes the character c to stdout
 * 
 *
 * Always Return: 1 On success and on error, -1 is returned, errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
