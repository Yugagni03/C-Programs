#include<iostream>
using namespace std;
int main(){
	int year;
	cout<<"enter a year :";
	cin>>year;
	if(year%400==0){
		cout<<year<<" is leap year"<<endl;
	}
	else if(year%100==0){
		cout<<year<<" is not leap year"<<endl;
	}
	else if(year%4==0){
		cout<<year<<" is leap year"<<endl;
	}
	else{
		cout<<year<<" is not leap year"<<endl;
	}
	return 0;
}
