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
	va_list ap;
	unsigned int i, j;

	format_t f[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};

	va_start(ap, format);
	for (i = 0; format[i];)
	{
		if (format[i] == '%')
		{
			j = 0;
			while (f[j].let)
			{
				if (f[j].let == format[i + 1])
				{
					_putchar(j);
					f[j].func(ap);
				}
				j++;
			}
		}
		i++;
	}
	va_end(ap);
	return (0);
}
