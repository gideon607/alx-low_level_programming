#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: 0 always
 */
int main(void)
{
	int num1 = 1, num2 = 2, sum = 0, fib;

	while (num2 < 4000000)
	{
		fib = num1 + num2;
		num1 = num2;
		num2 = fib;
		if (num1 % 2 == 0)
		{
			sum += num1;
		}
	}
	printf("%d\n", sum);
	return (0);
}

