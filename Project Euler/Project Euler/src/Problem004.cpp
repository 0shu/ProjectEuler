//The function for problem 004 "Largest palindrome product"
//Goal: Find the largest palindrome made from 2 3-digit numbers
#include "main.h"

void Problem004()
{
	int answer = 998001;
	int temp = answer;
	int reverse = 0;
	bool flag = true;

	while (flag)
	{
		answer--;
		temp = answer;
		reverse = 0;
		while (temp != 0) //reverses the number
		{
			reverse = (reverse * 10) + (temp % 10);
			temp /= 10;
		}
		//std::cout << "\nChecking number " << answer; DEBUG STATEMENT
		if (reverse == answer) //The number IS a palindrome
		{
			//std::cout << "Checking palindrome " << answer << std::endl; DEBUG STATEMENT
			for (int i = 999; i > 100; i--)
			{
				if (!(answer % i) && (answer / i < 1000)) //If it can be divided by a number less than 1000 then its our man
				{
					flag = false;
					break;
				}
			}
		}
	}

	

	

	std::cout << "The answer to problem 004 is: " << reverse << std::endl;
}

/*
NOTES:
	We ought to have a way to check palidrominess
	We should count downwards as the numbers we're looking for will be close to the top end.

	Ways to check if something is a palindrome
	- Cast it into a string and check each character?
	- Flip it around and see if it equals itself


	Max number possible by 2 3 digits is 999 x 999 = 998001
	So we'll be dealing with a 6 digit number under that
	997799 is the largest palindrome of 6 digits under that

*/