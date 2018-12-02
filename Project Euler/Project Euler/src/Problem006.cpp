//The function for problem 006 "Sum suare difference"
//Goal: Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum
#include "main.h"

int SumSquares(int amt);
int SquareSum(int amt);

void Problem006()
{
	int answer = 0;

	answer = SquareSum(100) - SumSquares(100); //take them away from each other to find the difference

	std::cout << "\nThe answer to problem 006 is: " << answer << std::endl;
}

int SumSquares(int amt) //For finding the Sum of the squares (1^2 + 2^2 + 3^2 + ...)
{
	int val = 0;
	for (int i = 1; i <= amt; i++)
	{
		val += (i * i);
	}
	return val;
}

int SquareSum(int amt) //For finding the square of the sum (1 + 2 + 3 + ...)^2
{
	int val = 0;
	for (int i = 1; i <= amt; i++)
	{
		val += i;
	}
	return (val * val);

}