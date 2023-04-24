#include "main.h"

/**
 * _printf - function that produces output according to a format
 *
 * @format: -
 *
 * Return: int
 */

int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	int count = 0;
	char x;

	while ((x = *format++) != '\0')
	{
		if (c == '%')
			switch (*format++)
			{
				case 'c':
					_putchar(va_arg(args, int));
					count++;
					break;
				case 's':
					const char *str = va_arg(args, const char *);
					while (*str != '\0')
					{
						_putchar(*str++);
						count++;
					}
					break;
				case '%':
					_putchar('%');
					count++;
					break;
				default:
					// unsupported conversion specifier
					break;
				else
				{
					_putchar(x);
					count++;
				}
			}
	}
	va_end(args);
	return (count);
}