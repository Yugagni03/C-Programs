#include<iostream>
int main()
{
	int i;
	for(i=10;i>=1;i--)
	{
		std::cout<<i;
		std::cout<<"\n";
		if(i==5)
		{
			continue;
		}
	}
	return 0;
	
}
