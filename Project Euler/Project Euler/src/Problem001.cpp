//The function for problem 001 "Multiples of 3 and 5"
//Goal: Get the sum of all multiples of 3 and 5 under 1000.
#include "main.h"

void Problem001()
{
	int answer = 0;

	for (int i = 0; i < 1000; i++)
	{
		if (!(i % 3) || !(i % 5))
		{
			answer += i;
		}
	}

	std::cout << "The answer to problem 002 is: " << answer << std::endl;
}