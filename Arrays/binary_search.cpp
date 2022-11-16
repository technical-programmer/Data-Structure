#include <iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        
        mid=s+(e-s)/2;
    }
    return -1;
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
    cout<<"Enter the key to be searched :"<<endl;
    cin>>key;
    
    int index=binarySearch(arr,n,key);
    cout<<"the index of "<<key<<"  is :"<<index<<endl;
}
