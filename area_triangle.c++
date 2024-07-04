#include<iostream>
int main()
{
	int a, b , c , area;
	std::cout<<"enter the side a :";
	std::cin>>a;
	std::cout<<"enter the side b :";
	std::cin>>b;
	std::cout<<"enter the side c :";
	std::cin>>c;
	
	area= (a+b+c)/2;
	
	std::cout<<"the area of triangle is :"<<area;
	return 0;
	
}
