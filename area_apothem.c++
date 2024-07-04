#include<iostream>
int main()
{
	float area;
	int perimeter , apothem;
	std::cout<<"enter the value of perieter :";
	std::cin>>perimeter;
	std::cout<<"enter the value of apothem :";
	std::cin>>apothem;
	
	area= (0.5*perimeter*apothem);
	std::cout<<"the area of polygone is :"<<area;
	return 0;
}
