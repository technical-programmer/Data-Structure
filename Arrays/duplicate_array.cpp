#include <iostream>
using namespace std;
void DuplicateArray(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
		    if(arr[i]==arr[j]){
			cout<<arr[j]<<" ";
		    }
		}
	}
	
}
int main(){
	int n;
	cout<<"Enter the size:"<<endl;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	
	cout<<"the duplicate in an array:"<<endl;
	DuplicateArray(arr,n);
	
}
