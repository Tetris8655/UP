#include<iostream>

int main()
{
	
	int n, k, counter = 0;
	std::cin >> n >> k;
	int product = k;
	
	while(n >= product)
	{
		product *= k;
		counter++;
	}
	
	std::cout << counter << std::endl;
	
	return 0;
	
}