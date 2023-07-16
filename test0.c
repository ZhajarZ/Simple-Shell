#include <stdio.h>

/**
 * main - This program calculates the sum
 * of the first N natural numbers,
 * where N is providedby the user.
 *
 * Return : -The `main` function returns an integer 0
 * on successful program execution.
 */
int sum_of_natural_numbers(int n);

int main(void)
{
	int num = 10;

	int result = sum_of_natural_numbers(num);

	printf("The sum of the first %d natural numbers is %d\n", num, result);
	return (0);
}
/* Function to compute the sum of the first N natural numbers */
int sum_of_natural_numbers(int n)
{
		int sum = 0;

		for (int i = 1; i <= n; i++)
		{
			sum += i;
		}
		return (sum);
}
