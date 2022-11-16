// sum of all element in an array
#include <iostream>
using namespace std;
void sum(int arr[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
	}
	cout<<sum;
}
int main(){
	int n;
	cout<<"Enter the size of array:"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"the sum of array is:"<<endl;
	sum(arr,n);
	
}
