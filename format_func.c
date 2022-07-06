#include "main.h"
/**
 * print_char - Function.
 * @list: Element of type va_list.
 * Return: Result the va_list.
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
/**
 * print_string - Function.
 * @list: Element of type va_list.
 * Return: Result the va_list.
 */
int print_string(va_list list)
{
	char *str, null[] = "(null)";
	int i;

	str = va_arg(list, char *);
	if (str == NULL)
	{
		for (i = 0; null[i]; i++)
			_putchar(null[i]);
	}
	else
		for (i = 0; str[i]; i++)
			_putchar(str[i]);
	return (i);
}
/**
 * print_percent - Function.
 * @list: Element of type va_list.
 * Return: Result the va_list.
 */
int print_percent(va_list __attribute__ ((unused)) list)
{
	_putchar('%');
	return (1);
}
