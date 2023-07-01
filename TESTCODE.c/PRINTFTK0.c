#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

#define BUFF_SIZE 1024

/**
 * print_buffer - Prints the contents of the buffer if it's not empty
 * @buffer: The character buffer
 * @buff_ind: Pointer to the buffer index
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
	{
		fwrite(buffer, 1, *buff_ind, stdout);
		*buff_ind = 0;
	}
}

/**
 * _printf - Custom printf function
 * @format: The format string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int count = 0;
	int buff_ind = 0;
	char buffer[BUFF_SIZE];

	while (*format)
	{
		if (*format != '%')
		{
			buffer[buff_ind++] = *format;
			if (buff_ind == BUFF_SIZE)
			{
				print_buffer(buffer, &buff_ind);
			}
			count++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);

			format++; /* Move past the '%' */

			/* Handle the conversion specifiers */
			switch (*format)
			{
			case 'c':
			{
				/* Print a character */
				int c = va_arg(args, int);

				putchar(c);

				count++;
				break;
			}
			case 's':
			{
				/* Print a string */
	char *s = va_arg(args, char *);
				while (*s)
				{
					putchar(*s);
					s++;
					count++;
				}
				break;
			}
			case '%':
			{
				/* Print a literal '%' */
				putchar('%');
				count++;
				break;
			}
			}
		}

		format++;
	}

	print_buffer(buffer, &buff_ind);

	va_end(args);
	return (count);
}

