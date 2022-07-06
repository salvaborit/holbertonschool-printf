#include "main.h"
/**
 * print_char - Function.
 * @list: Element of type va_list.
 * Return: Result the va_list.
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (0);
}
/**
 * print_string - Function.
 * @list: Element of type va_list.
 * Return: Result the va_list.
 */
int print_string(va_list list)
{
	char *str;
	int i;

	str = va_arg(list, char *);
	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (0);
}
/**
 * print_percent - Function.
 * @list: Element of type va_list.
 * Return: Result the va_list.
 */
int print_percent(va_list __attribute__ ((unused)) list)
{
	_putchar('%');
	return (0);
}
