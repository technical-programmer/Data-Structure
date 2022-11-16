// sum of even and odd

#include <iostream>
using namespace std;
 void   sumEvenOdd(int arr[],int n){
int sEven=0;
int sOdd=0;
for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            sEven=arr[i]+sEven;
        }
        else{
            sOdd=arr[i]+sOdd;
        }
}
 int sum=sEven+sOdd;
cout<<"sum of even numbers:"<<sEven<<endl;
cout<<"sum of odd numbers:"<<sOdd<<endl;
 cout<<"the sum of even and odd numbers:";
 cout<<sum<<endl;
    
}
int main(){
int n;
cout<<"Enter the size of array:"<<endl;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sumEvenOdd(arr,n);
}
