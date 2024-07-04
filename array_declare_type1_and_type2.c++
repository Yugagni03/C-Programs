#include<iostream>
int main()
{
    // type 1 of array declaration.
    
	int marks[5];
	marks[0]= 78;
	marks[1]= 89;
	marks[2]= 90;
	marks[3]= 87;
	marks[4]= 99;
	
	std::cout<<marks[0]<<"\n";
	std::cout<<marks[1]<<"\n";
	std::cout<<marks[2]<<"\n";
	std::cout<<marks[3]<<"\n";
	std::cout<<marks[4]<<"\n";
	
	// type 2 of array declaration.
	
	int mark[]= {89 , 76 , 55 , 33 , 90};
	
	std::cout<<mark[0]<<"\n";
	std::cout<<mark[1]<<"\n";
	std::cout<<mark[2]<<"\n";
	std::cout<<mark[3]<<"\n";
	std::cout<<mark[4]<<"\n";
	
	
	return 0;
	
}
