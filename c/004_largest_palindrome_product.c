//Find the largest palindrome made from the product of two 3-digit numbers.
#include <stdio.h>
#include <stdbool.h>

bool	is_palindrome(int number)
{
	int	remainder;
	int	reverse;
	int	original;

	reverse = 0;
	original = number;
	while (number != 0)
	{
		remainder = number % 10;
		reverse = reverse * 10 + remainder;
		number = number / 10;
	}
	if (original == reverse)
	{
		return (true);
	}
	else
	{
		return (false);
	}
}

int	largest_palindrome(void)
{
	int	largest;
	int	number;
	int	product;
	int	i;

	number = 999;
	largest = 0;
	while (number >= 100)
	{
		i = number;
		while (i >= 100)
		{
			product = number * i;
			i--;
			if (is_palindrome(product))
			{
				if (largest < product)
					largest = product;
			}
		}
		number--;
	}
	return (largest);
}

int	main(void)
{
	printf("%d\n", largest_palindrome());
	return (0);
}
