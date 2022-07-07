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
	unsigned int intLen, m, d, x, z;
	int n;

	n = va_arg(list, int);
	m = n;
	for (intLen = 0; m != 0; intLen++)
	{
		m /= 10;
	}
	for (d = 0, x = 1; d < intLen; d++, x++)
	{
		m = n;
		z = _pow(10, intLen - x);
		putchar((m / z) % 10);
	}
	return (intLen);
}
/**
* 
*
*/
int _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (x == 0)
		return (0);
	else if (x == 1)
		return (1);
	else if (y > 0)
		return (x * _pow(x, y - 1));
	return (1);
}
