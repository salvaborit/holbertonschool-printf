#include "main.h"
/**
 * print_char - Function.
 * @list: Element of type va_list.
 * Return: Result the va_list.
 */
int print_char(va_list list)
{
	putchar(va_arg(list, int));
	return (1);
}
/**
 * print_str - Function.
 * @list: Element of type va_list.
 * Return: Result the va_list.
 */
int print_str(va_list list)
{
	char *str, null[] = "(null)";
	int i;

	str = va_arg(list, char *);
	if (str == NULL)
	{
		for (i = 0; null[i]; i++)
			putchar(null[i]);
	}
	else
		for (i = 0; str[i]; i++)
			putchar(str[i]);
	return (i);
}
/**
 * print_decimal - Function.
 * @list: Element of type va_list.
 * Return: Result the va_list.
 * int print_decimal(va_list list)
 * {
 * return (0);
 * }
 * int print_integer(va_list list)
 * {
 * return (0);
 * }
*/
