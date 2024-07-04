#include<iostream>
using namespace std;
class rectangle{
	private:
	int length;
	int breadth;
	public:
		void setlength(int l){
			if(l>0){
				length= l;
			}
			else{
				length= 1;
			}
		}
		void setbreadth(int b){
			if(b>0){
				breadth= b;
			}
			else{
				breadth= 1;
			}
		}
	int area(){
		return length*breadth;
	}
	int perimeter(){
		return 2*(length+breadth);
	}
	int getlength(){
	return length;
}
int getbreadth(){
return breadth;
}
};
int main()
{
	rectangle r1;
	r1.setlength(10);
	r1.setbreadth(5);
	cout<<"the area is:"<<r1.area()<<endl;
	cout<<"the perimeter is:"<<r1.perimeter()<<endl;
	cout<<r1.getbreadth();
	return 0;
}
