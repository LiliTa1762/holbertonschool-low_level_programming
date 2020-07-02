#include "holberton.h"
/**
 *prime_checker - function 1
 *@count: count the string
 *@n: variable
 *Return: 1, 0
 */
int prime_checker(int count, int n)
{

	if (n % count == 0)
	{
		if (count == n)
			return (1);
		else
			return (0);
	}

	return (prime_checker(count + 1, n));
}

/**
 *is_prime_number - prime numbers
 *@n: variable
 *Return: 0, 1, or prime_checker
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n > 2)
		return (prime_checker(2, n));

	return (1);
}
