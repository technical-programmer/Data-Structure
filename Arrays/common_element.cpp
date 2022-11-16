// find common element in an array
#include <iostream>
using namespace std;
void commonElement(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i]==arr[j]){
				cout<<arr[i]<<" ";
			}
		}
	}
}
int main(){
	int n;
	cout<<"Enter the size of array:"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int j=0;j<n;j++){
		cin>>arr[j];
	}
	
	commonElement(arr,n);
}
