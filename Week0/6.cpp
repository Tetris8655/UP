#include<iostream>

int main()
{
	
	int n1, n2, curDigit1, curDigit2, counter = 0;
	std::cin >> n1 >> n2;
	
	while(n1 > 0) 
	{
		curDigit1 = n1 - (n1 / 10) * 10;
		curDigit2 = n2 - (n2 / 10) * 10;
		if(curDigit1 == curDigit2)counter++;
		n1 /= 10;
		n2 /= 10;
	}
	
	std::cout << counter << std::endl;
	
	return 0;
	
}