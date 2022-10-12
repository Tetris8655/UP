#include<iostream>
#include<cmath>

int main()
{
	double x, y;
	std::cin >> x >> y;
	
	if(y < (x/3) + 1 && y > x + 1 && sqrt(pow((x+1), 2)+pow((y-1), 2)) < 1)std::cout << "In" << std::endl;
	else std::cout << "Out" << std::endl;
	
	return 0;
	
}