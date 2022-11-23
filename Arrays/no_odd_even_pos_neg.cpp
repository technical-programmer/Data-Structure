#include <iostream>
using namespace std;
void positive(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
    if(arr[i]>0){
        count++;
    }
}
 cout<<"the no of positive no  are:"<<count<<endl; 
}
void negative(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
    if(arr[i]<0){
        count++;
    }
}
 cout<<"the no of negative  no  are:"<<count<<endl; 
}


void odd(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
    if(arr[i]%2!=0){
        count++;
    }
}
 cout<<"the no of odd  no  are:"<<count<<endl; 
}

void even(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
    if(arr[i]%2==0){
        count++;
    }
}
 cout<<"the no of even  no  are:"<<count<<endl; 
}

void zeroes(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
    if(arr[i]==0){
        count++;
    }
}
 cout<<"the no of zeroes   are:"<<count<<endl; 
}
int main(){
    int n;
    cin>>n;
    int arr[1000];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    positive(arr,n);
    negative(arr,n);
    odd(arr,n);
    even(arr,n);
    zeroes(arr,n);
    
}
