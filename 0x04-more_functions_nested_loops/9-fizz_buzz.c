#include"main.h"



/**
 * main - print numbers 1 - 100 followed by a new line
 *
 *       numbers that are multiples of 3 print Fizz
 *
 *       numbers that are multiples of 5 print Buzz
 *
 *       numbers that are multiples of 3 n 5 print FizzBuzz
 *
 *       each number and word to be separated by space
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int num = 1;
	while (num++ < 100)
		{
	if ((num % 3 == 0) && (num % 5 == 0))
		{
													printf("FizzBuzz ");
														}
	else if ((num % 3) == 0)
													{
													printf("Fizz ");
													}
												else if ((num % 5) == 0)
													{
												if (num != 100)
																							{
																									printf("Buzz ");
																									}
												else
																									{
																									printf("Buzz");
																									}
														}
												else
														{
														printf("%d ", num);
																							}
															}
			printf("\n");
			return (0);
}
