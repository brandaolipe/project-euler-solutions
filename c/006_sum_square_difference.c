/* Find the difference between the sum of the squares
of the first one hundred natural numbers and the
square of the sum.

sum of squares : 1²+2²+...+10²=385.
square of sum : (1+2+...+10)²=55²=3025. */

#include <stdio.h>

int	square_of_sum(int number)
{
	int	i;
	int	result;

	i = 1;
	result = 0;
	while (i <= number)
	{
		result += i;
		i++;
	}
	result = result * result;
	return (result);
}

int	sum_of_squares(int number)
{
	int	i;
	int	result;

	i = 1;
	result = 0;
	while (i <= number)
	{
		result = result + (i * i);
		i++;
	}
	return (result);
}

int	difference(int number)
{
	int	result;

	result = square_of_sum(number) - sum_of_squares(number);
	return (result);
}

int	main(void)
{
	printf("%d\n", difference(100));
	return (0);
}
