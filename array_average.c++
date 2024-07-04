#include<iostream>
using namespace std;
int main()
{
	int arr[5]={5,5,6,1,3};
	int sum=0;
	for(int i=0;i<=5;i++){
		sum=sum+arr[i];
	}
	int avg=sum/5;
	cout<<avg<<endl;
	return 0;
}
