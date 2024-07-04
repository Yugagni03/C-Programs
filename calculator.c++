#include<iostream>
int main()
{
	int op , val1 , val2;
	std::cout<<"enter the value 1:";
	std::cin>>val1;
	
	std::cout<<"enter the value 2:";
	std::cin>>val2;
	
	std::cout<<"enter an operator:";
	std::cin>>op;
	
	switch(op)
	{
	
	case '+':
		std::cout<<val1+val2;
		break;
		case '-':
			std::cout<<val1-val2;
			break;
			case '*':
				std::cout<<val1*val2;
				break;
				case '/':
					std::cout<<val1/val2;
					break;
					default:
						std::cout<<"error";
						break;
					}
					return 0;
	
}
