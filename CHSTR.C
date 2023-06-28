#include "main.h"

/**
 * printC - print char
 * @arg: argument
 *
 * Return: 0 if successful
 */

int printC(va_list arg)
{
	char c = va_arg(arg, int);
	_putchar(c);
	return (0);
}

/**
 * printS  - print string
 * @arg: argument
 *
 * Return:  1 to the number of characters in string.
 */
int printS(va_list arg)
if (*format[f] == 's')
{
    char* charString = va_arg(args, char*);
    if (charString != NULL)
    {
        int index = 0;
        while (charString[index] != '\0')
        {
            _putchar(charString[index]);
            index++;
        }
    return (1);
    }
/**
 * I
 *printP - print  percentage
 * @arg: argument
 *
 * Return: 0 if successful
 */
int printP(va_list arg __attribute__((unused)))
{
	_putchar('%');
	return (1);
}

















































