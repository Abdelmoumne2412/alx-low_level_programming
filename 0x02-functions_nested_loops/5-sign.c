#include "main.h"
 /**
 * print_sign - prints the sign of a number
 * @n: the int to check
 *
 * Description: This function takes an integer as input and prints the sign
 *              (+, 0, or -) corresponding to its value. It returns 1 if the
 *              number is positive, 0 if it is zero, and -1 if it is negative.
 *
 * Return: 1 if n is greater than zero and prints '+'
 *         0 if n is zero and prints '0'
 *        -1 if n is less than zero and prints '-'
 */
	int print_sign(int n)
	{
		if (n > 0)
		{
			_putchar('+');
			return (1);
		} else if (n == 0)
		{
			_putchar(48);
			return (0);
		} else if (n < 0)
		{
			_putchar('-');
		}
			return (-1);
	}

