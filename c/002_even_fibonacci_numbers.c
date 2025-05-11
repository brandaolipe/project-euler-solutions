#include <stdio.h>

int	even_fibo_sum(int target)
{
	int	first_number;
	int	second_number;
	int	sum;
	int	temp;

	first_number = 1;
	second_number = 2;
	sum = 0;
	while (second_number <= target)
	{
		if (second_number % 2 == 0)
		{
			sum = sum + second_number;
		}
		temp = first_number;
		first_number = second_number;
		second_number = temp + second_number;
	}
	return (sum);
}

int	main(void)
{
	printf("%d\n", even_fibo_sum(4000000));
	return (0);
}
