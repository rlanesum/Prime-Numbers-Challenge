#include <iostream>

using namespace std;


int test();

int main() 
{

	test();

	return 0;
}

int test()
{

	int count = 1;
	int number = 2;
	int everyNumber;

	while (number < 1000)
	{
	
		int answer = number % 2;

		if ((answer == 1))
		{
			count = count + 1;
		}
	}
	return count;

}

