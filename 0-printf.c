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
	int i, charCount = 0;

	if (!format || !strcmp(format, "%"))
		return (-1);
	va_start(list, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && (format[i + 1] == 0 || format[i + 1] == '%'))
		{
			putchar('%');
			i++;
			charCount++;
		}
		else if (format[i] == '%')
		{
			charCount += percent_case(list, format[i + 1]);
			i++;
		}
		else
		{
			charCount += 1;
			putchar(format[i]);
		}
	}
	va_end(list);
	return (charCount);
}
/**
 * percent_case - Function.
 * @list: Element of type va_list.
 * @c: char (format[i + 1])
 * Return: 2 (number of chars printed)
 */
int percent_case(va_list list, char c)
{
	int j;
	format_t f[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_dec},
		{"i", print_dec}
	};
	j = 0;
	while (j < 4)
	{
		if (*f[j].let == c)
		{
			return (f[j].f(list));
		}
		j++;
	}
	putchar('%');
	putchar(c);
	return (2);
}
