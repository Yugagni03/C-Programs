#include<iostream>
using namespace std;
class rectangle{
	public:
		int len;
		int bre;
		int area(){
			return len*bre;
		}
		int perimeter(){
			return 2*(len+bre);
		}
};
int main()
{
	rectangle r1,r2;
	r1.len=10;
	r1.bre=3;
	cout<<r1.area();
	cout<<r1.perimeter();
	r2.len=9;
	r2.bre=8;
	cout<<r2.area();
    cout<<r2.perimeter();
	return 0;	
	}
