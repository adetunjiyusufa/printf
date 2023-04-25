#include "main.h"

/**
 * _printf - function that produces output according to a format
 *
 * @format: is the string format
 * @count: -
 * Return: int
 */

int _printf(const char *format, ...)
{
	char x;
	int count;
	va_list args;

	va_start(args, format);
	count = 0;
	while ((x = *format++) != '\0')
	{
		if (x == '%')
			switch (*format++)
			{
				case 'c':
					_putchar(va_arg(args, int));
					count++;
					break;
				case 's':
				{
					const char *str = va_arg(args, const char *);
					{
						while (*str != '\0')
						_putchar(*str++);
						count++;
						break;
					}
				}
				case '%':
					_putchar('%');
					count++;
					break;
				default:
					break;
				{
					_putchar(x);
					count++;
				}
			}
	}
	va_end(args);
	return (count);
}
