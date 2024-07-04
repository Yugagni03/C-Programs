#include<iostream>

int main()
{
	int n,m;
	std::cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			std::cin>>arr[i][j];
		}
	}
	
	
	std::cout<<"the 2-D array is :\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			std::cout<<arr[i][j]<<" ";
		}
	}std::cout<<"\n";
	return 0;
}
