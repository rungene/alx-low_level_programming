#include <unistd.h>

/**
* _putchar - writes c to stdout
* @c: character to print
*
* Return: 1 on success or -1 on failuer
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
