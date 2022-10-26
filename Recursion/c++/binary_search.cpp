#include <iostream>
using namespace std;
bool binarySearch(int arr[],int s,int e,int k){
	if(s>e){
		return -1;
	}
	int mid=s+(e-s)/2;
	\
	if(arr[mid]==k)
	return true;
	
	if(arr[mid]<k){
		return binarySearch(arr,mid+1,e,k);
		
	}
	else{
		return binarySearch(arr,s,mid-1,k);
	}
}
int main(){
	int arr[6]={2,4,6,10,12,18};
	int size=6;
	int key=25;
	cout<<"present or not "<<binarySearch(arr,0,5,key);
	
}
