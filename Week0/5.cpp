#include<iostream>

int main()
{
	
	int n;
	std::cin >> n;
	
	for(int i = 1, curNum = 1;; i++)
	{
		for(int j = 0; j < i; j++, curNum++)
		{
			std::cout << curNum;
			if(curNum >= n)
			{
				std::cout << std::endl;
				return 0;
			}
		}
		
		std::cout << std::endl;
	}
	
}