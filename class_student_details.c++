// Assign and print the roll number, phone number and address of two students having names "Sam" and "John" respectively by creating two objects of the class 'Student'.
#include<iostream>
#include<string>
using namespace std;
class student{
	public:
		string name;
		int roll_number;
		int ph_number;
		string address;
};
int main()
{
	student s1 , s2;
	s1.name="sam";
	s1.roll_number=12;
	s1.ph_number=8734789;
	s1.address="34/a, g.h. road";
	
	s2.name="john";
	s2.roll_number=20;
	s2.ph_number=9764321;
	s2.address="34/a, ramlal road";
	
	cout<<s1.name<<" "<<s1.roll_number<<" "<<s1.ph_number<<" "<<s1.address<<endl;
	
	cout<<s2.name<<" "<<s2.roll_number<<" "<<s2.ph_number<<" "<<s2.address<<endl;
	return 0;
}

