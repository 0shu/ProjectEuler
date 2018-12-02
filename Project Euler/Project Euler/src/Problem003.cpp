//The function for problem 003 "Largest Prime Factor"
//Goal: Find the largest prime factor of 600851475143
#include "main.h"

void Problem003()
{
	long long answer = 3;
	long long goal = 600851475143;

	while (answer < goal) //If answer is less than goal then there is still a factor to be removed
	{
		if (goal % answer == 0) //if it divides into it
		{
			goal /= answer;   //The factor's partner becomes the new goal
			//std::cout << "\nRefactoring goal to be:" << goal; DEBUG STATEMENT
		}
		else //if it doesnt divide into it
		{
			answer += 2; //we go to the next odd number and check it for primefactoryness
		}
	}

	std::cout << "The answer to problem 003 is: " << answer << std::endl;
}