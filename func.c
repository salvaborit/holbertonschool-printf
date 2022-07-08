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
	int n, n2;

	n = va_arg(list, int);
	if (n < 0)
	{
		putchar('-');
		n = -n;
		count++;
	}
	if (n >= 0 && n <= 9)
	{
		putchar((n % 10) + '0');
		count++;
	}
	else
	{
		print_digit(n);
		for (n2 = n; n2 != 0; count++)
		{
			n2 /= 10;
		}
	}
	return (count);
}
/**
* print_digit - prints multi digit unsigned ints
* @n: unsigned multi digit int to print.
* Return: int.
*/
int print_digit(int n)
{
	if (n / 10 != 0)
	{
		print_digit(n / 10);
	}
	return (putchar((n % 10) + '0'));
}
