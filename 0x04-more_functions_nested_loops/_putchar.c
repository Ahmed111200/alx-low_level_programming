#include <unistd.h>n
#include "main.h"

/**
 * _putchaar - write the charater c to stdout
 * @c: The character to print
 * 
 * Rerurn: on success 1.
 * 	   on error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
