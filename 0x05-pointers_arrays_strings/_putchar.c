#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output (stdout).
 * @c: The character to be written.
 *
 * Return: On success, return the number of characters written.
 *         On error, return -1 and set errno appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
