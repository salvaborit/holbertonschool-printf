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
	int i, j, charCount = 0;
	format_t f[] = {
		{"c", print_char},
		{"s", print_string}
	};

	if (!format || !strcmp(format, "%"))
		return (-1);
	va_start(list, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && (format[i + 1] == 0 || format[i + 1] == '%'))
		{
			_putchar('%');
			i++;
			charCount++;
		}
		else if (format[i] == '%')
		{
			j = 0;
			while (j < 2)
			{
				if (*f[j].let == format[i + 1])
				{
					charCount += f[j].f(list);
					i++;
				}
				j++;
			}
		}
		else
		{
			charCount += 1;
			_putchar(format[i]);
		}
	}
	va_end(list);
	return (charCount);
}
