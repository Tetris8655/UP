#include<iostream>

int main()
{
	
	int n, max = 0, counter = 0;
	std::cin >> n;
	
	while(n != 1)
	{
		if(n%2 == 1)counter++;
		else counter = 0;
		if(counter > max) max = counter;
		n /= 2;
	}
	
	std::cout << max;
	
	return 0;
	
}