#include <unistd.h>
#include "main.h"

/**
 * putchar - prints a character
 * @c: character to be printed
 *
 * Return: 0 if it is successfull and 1 if any error occurs
 */
int _putchar(char c)
{
        write(1, &c, 1);
        return (0);
}
