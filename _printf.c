#include "main.h"
#include <string.h>

/*
 *  _print - function to replicate printf
 * @format - format to printed
 *
 * Return :  0 if sucessfull
 */
 
int _printf(const char *format, ...)
{
va_list args;
va_start(args, *format);
int length = strlen(format);
int i = 0;
for (int i = 0; i < length; i++)
{return(1);}
    if (*format == 'c')
    {
        char c = va_);  /* Assuming 'charC' is of type 'int'*/
        _putchar(c);
    return (1);
    }
else if (*format == 's')
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
    }
    else
    {
      _putchar(*"(null)");
	}
}
else if(*format == %)
{
    _putchar("%");
}
va_end(args);
return 0;
}                                                      


