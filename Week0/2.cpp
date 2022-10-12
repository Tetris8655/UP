#include<iostream>

int main()
{
	
	int a, b, counter = 0, curDigit;
	int sum = 0, product = 1;
	std::cin >> a >> b;

	while (a <= b)
	{
		for (int acopy = a; acopy > 0; acopy /= 10) 
		{
			curDigit = acopy - (acopy / 10) * 10;
			
			sum += curDigit;
			product *= curDigit;
		}

		if (sum == product)counter++;
		
		sum = 0;
		product = 1;
		
		a++;
	}

	std::cout << counter << std::endl;

	return 0;
	
}
