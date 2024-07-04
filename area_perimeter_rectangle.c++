#include<iostream>
int main()
{
	int area , perimeter , a , b;
	std::cout<<"enter the side a :";
	std::cin>>a;
	std::cout<<"enter the side b :";
	std::cin>>b;
	
	area= a*b;
	perimeter= 2*(a+b);
	
	std::cout<<"the area is :"<<area<<"\n";
	std::cout<<"the perimeter is :"<<perimeter<<"\n";
	return 0;
	
}
