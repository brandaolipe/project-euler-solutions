#include <stdio.h>

int	largest_prime_factor(long int number)
{
	int	divisor;
	int	largest;

	divisor = 2;
	largest = 0;
	if (number > 1)
	{
		while (number != 1)
		{
			if (number % divisor == 0)
			{
				number = number / divisor;
				largest = divisor;
			}
			else
			{
				divisor++;
			}
		}
	}
	return (largest);
}

int	main(void)
{
	printf("%d\n", largest_prime_factor(600851475143));
	return (0);
}
