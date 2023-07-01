#include "main.h"

/* Funtion prototypes
 * int pChar(va_list arg);
 * int pString(va_list arg);
 * int pPercent(int pp(va_list arg, x) x is a function pointer)
*/

/*Function 1*/

/*
 * pChar - print char
 * @arg: argument
 *
 * Return: 0 if successful
 */

int pChar(va_list arg)
{
	char c = va_arg(arg, int);
	_putchar(c);
	return (0);
}


/* Function 2*/

/**
 * pString  - print string
 * @arg: argument
 *
 * Return:  1 to the number of characters in string.
 */
int pString(va_list arg)
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


 /* Function 3 */

/**
 * I
 *pPercent - print  percentage
 * @arg: argument
 *
 * Return: 0 if successful
 */
int pPercent(va_list arg __attribute__((unused)))
{
	_putchar('%');
	return (1);
}

















































