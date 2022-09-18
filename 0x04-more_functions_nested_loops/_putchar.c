#include <unistd.h>
/**
*_putchar- writes the character c to stdout
*@c: Character to print
*Return: 1 on success
*on error, -1 is returned, and erro no is set appropriately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
