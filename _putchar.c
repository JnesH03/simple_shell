#include <unistd.h>
/**
* _putchar - writes char c to stdout
* @c: char to print
* @p: pointer to update length
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c, int *p)
{
	*p += 1;

	return (write(1, &c, 1));
}
