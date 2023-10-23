#include <unistd.h>

/**
* _putchar - writes the character c to stdout
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriate.
*/
int _putchar(char c)
{
			return (write(1, &c, 1));
}
