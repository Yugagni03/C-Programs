#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"enter a ch :";
	cin>>ch;
	if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'){
		cout<<"it is a vowel"<<endl;
	}
	else if(ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U'){
		cout<<"it sa a vowel"<<endl;
	}
	else{
		cout<<"it is a consonent"<<endl;
	}
	return 0;
}
