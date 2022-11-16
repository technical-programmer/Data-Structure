// linear search 
#include <iostream>
using namespace std;
void linearSearch(int arr[],int n,int key){
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			cout<<i;
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
	int key;
	cout<<"Enter the element to be searched in an array:"<<endl;
	cin>>key;
	cout<<"the searched element is :"<<endl;
   linearSearch(arr,n,key);
}
