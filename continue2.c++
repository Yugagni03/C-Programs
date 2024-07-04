#include<iostream>
int main()
{
	int i;
	for(i=1;i<=100;i++)
	{
		std::cout<<i;
		if(i%3==0)
		continue;
	}
	
	return 0;
}
