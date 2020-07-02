#include "holberton.h"
/**
*square_root - function 1
*@count: variable
*@n: variable
*Return: count or -1
*/
int square_root(int count, int n)
{
if (count * count == n)
return (count);

if (count * count > n)
return (-1);

return (square_root(count + 1, n));
}

/**
* _sqrt_recursion - returns the natural square root of a number
*@n: variable
*
*Return: square_root or -1
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (square_root(n, 0));
}
