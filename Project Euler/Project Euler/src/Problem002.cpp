//The function for problem 002 "Even Fibonacci numbers"
//Goal Find the sum of all even Fibonacci numbers under 4,000,000
#include "main.h"

void Problem002()
{
	int answer = 0; //For storing the running total/eventual answer
	int i = 1; //For storing the lower fib. number
	int j = 1; //For storing the higher fib. number
	int k = 0; //temp value for transferring over numbers correctly

	while (k < 4000000) //The number 4000000 we cant exceed
	{
		if (!(k % 2)) answer += k; //If k is even we add it to the running total
		i = j; //We move the fib. sequence along one place
		j = k;
		k = i + j; //By putting this at the end of the loop we can use it in the while and save 1 extra calculation each loop
		//std::cout << k << " is the number k\n"; DEBUG LINE
	}
	std::cout << "The answer to problem 002 is: " << answer << std::endl;
}