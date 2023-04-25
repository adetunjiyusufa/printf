#include "main.h"

/**
 * _printf - function that produces output according to a format.
 *
 * @format: is a ch`aracter string
 *
 * Return: int
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i, x;

	i = 0;
	x = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'd' || format[x] == 'i')
				x += printf("%d", va_arg(args, int));
			else
			{
				_putchar('%');
				if (format[i])
				{
					_putchar(format[i]);
					x += 2;
				}
				else
					return (-1);
			}
		}
		else
		{

			_putchar(format[i]);
			x++;
		}
		i++;
	}
	va_end(args);
	return (x);
}
