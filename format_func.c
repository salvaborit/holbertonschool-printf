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
	unsigned int count = 0;
	int n1, n2;

	n1 = va_arg(list, int);
	if (n1 < 0)
	{
		count += putchar('-');
		n2 = -n1;
	}
	else
	{
	while (n1 > 9)
	{
	n2 /= 10;
	n2 *= 10;
	}
	while (n1 >= 1)
	{
	count += putchar((n2 % 10) + '0');
	}
	}
	return (count);
}
