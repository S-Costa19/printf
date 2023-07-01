#include "main.h"

/*
 * Funtion prototypes
 * int pChar(va_list arg);
 * int pString(va_list arg);
 * int pPercent(va_list arg)
*/

/*Function 1*/

/*
 * pChar -print char
 * @arg: argument
 *
 * Return: 1 if successful
 */

/*function to print char */
char pChar(va_list arg)
{char c = va_arg(arg, int);
	putchar(c);
	return (1);
}

/*function to print string*/
/* Function 2*/

/**
 * pString  - print string
 * @arg: argument
 *
 * Return:  0 to the number of characters in string.
 */

/*Function to print percentage*/
char pString(va_list arg)
{	int i = 0;
	char *Str;

	if (!Str[i] || Str == "null")
	{Str = "null"; }
	Str[i] = strlen(Str);
	for (int i = 0; Str[i] != '\0'; i++)
	{putchar (Str[i]) ; }

	return (1) ; }

/* Function 3 */

/**
 * pPercent - print percent
 * @arg: argument
 *
 * Return: 1 if successful
 */

int pPercent(va_list arg)
{
	return (write(1, "%%", 1));
}

















































