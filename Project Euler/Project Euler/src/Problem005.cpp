//The function for problem 005 "Smallest Multiple"
//Goal: Find the smallest number that is evenly divisible by 1-20
#include "main.h"

void Problem005()
{
	int answer = 2;

	for (int j = 0;; answer++)
	{
		j = 0;
		//std::cout << "Testing " << answer << " \n"; DEBUG STATEMENT
		for (int i = 1; i <= 20; i++)
		{
			if (answer % i) break;
			else j++;
		}
		if (j >= 20) break;
	}

	std::cout << "\nThe answer to problem 005 is: " << answer << std::endl;
}

/*
	ultimately I chose a much easier and cheesier method than what i describe below
	Whilst my method was elegant it was needlessly long and stupid to try and follow
	Sometimes you just have to accept that a brute force is simpler and easier to use.
	Doing this by hand takes less time than to type all the code here though, bit of a pointless one imo.

NOTES:
	We need to find the prime factors of each number 1-20 and make sure that we cancel out any duplicates.
	E.g.
	2's prime factor is 2.
	4's prime factors are 2,2.
	Thus if we have two 2s to make 4, then we automatically have enough to make a 2.

	Lets do a number by hand.
	10               2 3 5 7 
	1 prime factors: 
	2 prime factors: 1
	3 prime factors:   1
	4 prime factors: 2 
	5 prime factors:     1
	6 prime factors: 1 1
	7 prime factors:       1
	8 prime factors: 3
	9 prime factors:   2
	10prime factors: 1   1

	so the total is 3 2 1 1
	so we have to multiply 2 * 2 * 2 * 3 * 3 * 5 * 7

	We must break each number into its prime factors
	then we need to store the primes we find
	and we need to store the amount of times they are factors for each number
*/