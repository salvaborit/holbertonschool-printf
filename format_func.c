#include "main.h"
/**
 * print_char - prints chars
 * @list: va_list that holds arguments from main func
 * Return: number of chars printed
 */
int print_char(va_list list)
{
	putchar(va_arg(list, int));
	return (1);
}
/**
 * print_str - prints strings
 * @list: va_list that holds arguments from main func
 * Return: number of chars printed
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
* print_dec - prints ints
* @list: va_list that holds arguments from main func
* Return: number of ints printed
*/
int print_dec(va_list list)
{
	int i, n;
	n = va_arg(list, int);
	putchar(n);
	for (i = 0; n != 0; i++)
		n /= 10;
	return (i);
}
/**
int print_integer(va_list list)
{
return (0);
}
*/
