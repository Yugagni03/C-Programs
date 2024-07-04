#include<iostream>
using namespace std;
int main()
{
int arr[5]={67,90,23,45,44};
int i, sum=0;
for(i=0;i<5;i++)
{
sum=sum+arr[i];
}
int avg=sum/5;
cout<<avg;
return 0;
}
