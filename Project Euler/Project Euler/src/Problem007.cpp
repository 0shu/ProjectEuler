//The function for problem 007 "10001st prime"
//Goal: Find the 10001st prime number
#include "main.h"

void Problem007()
{
	int answer = 2;
	std::vector<int> primes;

	while (true)
	{
		if (primes.size() >= 10001)
		{
			break;
		}
		for (int i = 0; i <= primes.size(); i++)
		{
			if (i == primes.size())
			{
				primes.push_back(answer);
				//std::cout << answer << "\t is the " << primes.size() << " prime! \n";
			}
			if (answer % primes[i] == 0)
			{
				break;
			}
		}
		answer++;
	}
	answer = primes[10000];

	std::cout << "\nThe answer to problem 007 is: " << answer << std::endl;
}