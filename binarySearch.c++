#include<iostream>

int binarySearch(int arr[], int n , int key){
int start =0;
int end= n;
while(start<=end){
	int mid = (start+end)/2;
	if(arr[mid]==key){
		return mid;
	}
	else if(arr[mid]>key){
		end=mid-1;
	}
	else{
		start=mid+1;
	}
}	
return -1;
}

int main()
{
	int n;
	std::cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
		std::cin>>arr[i];
	}
	int key;
	std::cin>>key;
	
	std::cout<<binarySearch(arr, n , key);
	return 0;
}
