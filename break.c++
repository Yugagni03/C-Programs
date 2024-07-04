#include<iostream>
int main()
{
	int i;
	for(i=0;i<=10;i++)
	{
		std::cout<<i;
		std::cout<<"\n";
		if(i==5)
		{
			break;
		}
	}
	return 0;
}
