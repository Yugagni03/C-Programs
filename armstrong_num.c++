#include<iostream>
using namespace std;
int main()
{
	int m,n,r,sum=0;
	cout<<"enter the number :";
	cin>>n;
	m=n;
	while(n>0){
		r=n%10;
		n=n/10;
		sum=sum+r*r*r;
	}
	if(m==sum){
		cout<<"ARMSTRONG !!";
		
	}
	else{
		cout<<"NOT ARMSTRONG !!";
	}
	return 0;
}
