#include "main.h"
/**
* _printf - produces output according to format
* @format: string that holds what will be printed
* Return: string that specifies how subsequent arguments
* (or arguments accessed via the variable-length argument
* facilities of stdarg(3)) are converted for output
*/
int _printf(const char *format, ...)
{
	va_list list;
	unsigned int i, j;

	format_t f[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};

	va_start(list, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			j = 0;
			while (f[j].let)
			{
				if (f[j].let[0] == format[i + 1])
				{
					f[j].func(list);
				}
				i++;
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
		}
	}
	va_end(list);
	return (0);
}
