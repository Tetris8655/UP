#include<iostream>

int main()
{
	
	int n;
	std::cin >> n;
	
	for(int i = n-1; i >= 0; i--)
	{
		for(int j = i; j > 0; j--)std::cout << " ";
		
		std::cout << "/";
		
		for(int j = i; j < n-1; j++)std::cout << "  ";
		
		std::cout << "\\" << std::endl;
	}
	
	for(int i = n*2; i > 0; i--)std::cout << "-";
	
	std::cout << std::endl;

	for(int i = n; i > 0; i--)
	{
		std::cout << "|";
		for(int j = (n-1)*2; j > 0; j--)std::cout << " ";
		std::cout << "|" << std::endl;
	}
	
	for(int i = n*2; i > 0; i--)std::cout << "=";
	
	return 0;
	
}
 