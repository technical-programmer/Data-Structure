#include <iostream>
using namespace std;

void reverse(int arr[],int n){
    int s=0;
    int e=n-1;
   while(s<=e){
        swap(arr[s],arr[e]);
        s++;
       e--;
        
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
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
    reverse(arr,n);
    print(arr,n);
    
    
}
