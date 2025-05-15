/*What is the smallest positive number that is evenly
divisible by all of the numbers from 1 to 20? */
#include <stdio.h>

int	smallest_multiple(int target)
{
	int	i;
	int	number;

	i = 1;
	number = target;
	while (i <= target)
	{
		i = 1;
		number++;
		while (i <= target)
		{
			if (number % i == 0)
			{
				i++;
			}
			else
			{
				break ;
			}
		}
	}
	return (number);
}

int	main(void)
{
	printf("%d\n", smallest_multiple(20));
	return (0);
}
