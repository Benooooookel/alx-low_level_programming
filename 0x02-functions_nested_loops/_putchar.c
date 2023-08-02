#include <unistd.h>
/**
 * _putchar - write the character to stdio
 * @c: is the character to be printed
 * 
 * Return: on successful 1.
 * on error, -1  is returned, errno is set appropreatly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
