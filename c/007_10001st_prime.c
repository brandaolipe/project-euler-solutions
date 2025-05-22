#include <stdio.h>
#include <stdbool.h>

int	prime_number(int number)
{
	int possible_prime = 2;
	int latest_prime;
	int count = 0;

	while (count < number)
	{
		bool is_prime = true;
		
		for (int i = 2; i < possible_prime; i++)
		{
			if (possible_prime % i == 0)
			{
				is_prime = false;
				break ;
			}
		}

		if (is_prime)
		{
			latest_prime = possible_prime;
			count = count + 1;
		}

		possible_prime = possible_prime + 1;
	}
	return (latest_prime);
}

int	main(void)
{
	printf("%d\n", prime_number(10001));
	return (0);
}
