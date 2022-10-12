#include<iostream>

int main()
{
	
	int n;
	std::cin >> n;
	
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(j < i)std::cout << " ";
			else std::cout << j;
		}
		
		std::cout << std::endl;
	}
	for(int i = n-1; i > 0; i--)
	{
		for(int j = 1; j <= n; j++)
		{
			if(j < i)std::cout << " ";
			else std::cout << j;
		}
		
		std::cout << std::endl;
	}
	
	return 0;
	
}