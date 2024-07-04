#include<iostream>
int main()
{
	int arr[]={4,5,6};
	int *ptr=arr;
	
	std::cout<<*ptr<<"\n";
	std::cout<<*(ptr+1)<<"\n";
	std::cout<<*(ptr+2)<<"\n";
	return 0;
	
}
