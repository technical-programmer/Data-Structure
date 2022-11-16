// diff  of  even and odd

#include <iostream>
using namespace std;
 void  diffEvenOdd(int arr[],int n){
  int sEven=0;
 int sOdd=0;
 int diff;
for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            sEven=arr[i]+sEven;
        }
        else{
            sOdd=arr[i]+sOdd;
        }
        
        if(sEven>sOdd){
            diff=sEven-sOdd;
		}
		else{
			 diff=sOdd-sEven;
		}
}

cout<<"sum of even numbers:"<<sEven<<endl;
cout<<"sum of odd numbers:"<<sOdd<<endl;
 cout<<"the diff of even and odd numbers:";
 cout<<diff<<endl;
    
}
int main(){
int n;
cout<<"Enter the size of array:"<<endl;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
diffEvenOdd(arr,n);
}
