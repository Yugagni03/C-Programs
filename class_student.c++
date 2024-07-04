#include<iostream>
#include<string>
using namespace std;
class student{
	public:
		string name;
		int roll;

};
int main(){
	student s1 , s2;
	s1.name="john";
	s1.roll=2;
	cout<<s1.name<<" "<<s1.roll<<endl;
	
	s2.name="jonny";
	s2.roll=6;
	cout<<s2.name<<" "<<s2.roll;
	
	
}
	
