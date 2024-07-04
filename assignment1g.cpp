#include<iostream>
using namespace std;
int main(){
	int number;
	cout<<"enter a number :";
	cin>>number;
	switch(number)
		{
			case 1:
			{
			 cout<<"one";
			break;
		    }
		    case 2:
		    	{
		    		cout<<"two";
		    		break;
				}
			
	  	    case 3:
		    	{
		    		cout<<"three";
		    		break;
				}
			  case 4:
		    	{
		    		cout<<"four";
		    		break;
				}
			 case 5:
		    	{
		    		cout<<"five";
		    		break;
				}
			default:
				{
					cout<<"error";
				}
	}
	return 0;
}
