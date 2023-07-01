#include "main.h"

/* Funtion prototypes
 * int pChar(va_list arg);
 * int pString(va_list arg);
 * int pPercent(va_list arg)
*/

/*Function 1*/

/*
 * pChar - print char
 * @arg: argument
 *
 * Return: 1 if successful
 */

int pChar(va_list arg)
{char c = va_arg(arg, int);
	_putchar(c);
	return (1);
}


/* Function 2*/

/**
 * pString  - print string
 * @arg: argument
 *
 * Return:  1 to the number of characters in string.
 */
int pString(va_list arg)
{int i=0; char*Str;
	if Str[i]= !Str[i] || Str [i]== NULL
	{Str[i]= " "}
	char*Str = va_args(arg, char*);
	for (int i = 0; Str[i]! = '\0'; i++)
	{
	_putchar(Str[i]);
	}
	return (1);
}


/* Function 3 */

/**
 * 
 *pPercent - print  percentage
 * @arg: argument
 *
 * Return:1 if successful
 */

int pPercent(va_list arg)
{
 return (write(1,"%%",1));
}

















































