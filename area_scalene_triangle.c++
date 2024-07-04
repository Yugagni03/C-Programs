#include<iostream>
int main()
{
	float area;
	int base , height;
	std::cout<<"enter the base :";
	std::cin>>base;
	std::cout<<"enter the height :";
	std::cin>>height;
	
	area= 0.5*base*height;
	std::cout<<"the area of scalene triangle is :"<<area;
	return 0;
}
