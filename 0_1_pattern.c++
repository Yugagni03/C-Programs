#include<iostream>
int main()
{
	int i , j , n;
	std::cout<<"enter the range of n :";
	std::cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if((i+j)%2==0)
			{
				std::cout<<"1";
			}
			else{
			std::cout<<"0";
		}
		}
		std::cout<<"\n";
	}
	return 0;
}
