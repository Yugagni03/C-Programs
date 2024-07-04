#include<iostream>
using namespace std;
int main()
{
	int i , even=0 , odd=0;
	int arr[5]={1,2,3,4,5};

	for(i=0;i<=5;i=i+2){
		if(arr[i]%2==0){
			even=even+arr[i];
		}
		else{
			odd=odd+arr[i];
		}
		cout<<"even:"<<even<<" "<<"odd:"<<odd<<endl;
	}
	return 0;
}
