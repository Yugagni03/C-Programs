#include<iostream>
using namespace std;
int main(){
	int temp;
	cout<<"enter a temp :";
	cin>>temp;
    if(temp<0){
    	cout<<"weater is freezing"<<endl;	
	}
	else if(temp<10){
		cout<<"very cold weather"<<endl;
	}
	else if(temp<20){
		cout<<"cold weather"<<endl;
	}
	else if(temp<30){
		cout<<"normal weather"<<endl;
	}
	else if(temp<40){
		cout<<"hot weather"<<endl;
	}
	else{
		cout<<"very hot weather"<<endl;
	}
	
	return 0;
}
