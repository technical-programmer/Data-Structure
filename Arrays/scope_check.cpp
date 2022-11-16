//  scope //
#include <iostream>
using namespace std;
void update(int arr[],int n){
	cout<<"inside the function"<<" "<<endl;
	arr[0]=120;
	arr[2]=20;
	// printing the array
	for(int i=0;i<3;i++){
		cout<<arr[i]<<" "<<endl;
	}
	cout<<"going back to function"<<" "<<endl;;
	
}
using namespace std;
int main(){
	int arr[3]={1,2,3};
	update(arr,3);
	// printing the array
	for(int i=0;i<3;i++){
		cout<<arr[i]<<" "<<endl;
	}
	
}
