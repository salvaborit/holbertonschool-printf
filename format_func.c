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
	int intLen, i, n, m;
	int *arr;

	n = va_arg(list, int);
	m = n;
	for (intLen = 0; m != 0; intLen++)
		m /= 10;
	arr = malloc(sizeof(int) * intLen + 1);
	if (!arr)
	{
		return (0);
	}
	for (i = intLen - 1; i >= 0; i--)
	{
		arr[i] = n % 10;
		n /= 10;
	}
	arr[intLen] = '\0';
	for (i = 0; i < intLen; i++)
	{
		putchar(arr[i]);
	}
	return (intLen);
}
/**
int print_integer(va_list list)
{
return (0);
}
*/
