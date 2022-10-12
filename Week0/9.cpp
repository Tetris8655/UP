#include<iostream>

int main()
{
	
	int a, b, curDigit;
	int sum1 = 0, product1 = 1, sum2 = 0, product2 = 1;
	std::cin >> a >> b;
	
	a++;

	while (a < b)
	{
		for (int acopy = a, index = 1; acopy > 0; acopy /= 10, index++) 
		{
			curDigit = acopy - (acopy / 10) * 10;
			if(index%2 == 1)
			{
				sum1 += curDigit;
				product1 *= curDigit;
			}
			else
			{
				sum2 += curDigit;
				product2 *= curDigit;
			}
		}

		if (sum1 == sum2 && product1 == product2)std::cout << a << " ";
		
		sum1 = sum2 = 0;
		product1 = product2 = 1;
		
		a++;
	}

	std::cout << std::endl;
	
	return 0;
	
}