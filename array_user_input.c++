#include<iostream>
int main()
{
	int n ;
	std::cout<<"enter the size of an array :";
	std::cin>>n;
	int arr[5];
	
	for(int i=0;i<n;i++){
		std::cin>>arr[i];
	}
	
	for( int i=0;i<n;i++){
		std::cout<<arr[i]<<"\n";
	}
	return 0;

}
