#include <iostream>
using namespace std;
int getMax(int num[],int size){
	int maxi=INT_MIN;
	for(int i=0;i<size;i++){
		
		maxi=max(maxi,num[i]);
	/*	if(num[i]>max){
			max=num[i];
		}*/
	}
	return maxi;
}
int getMin(int num[],int size){
	int mini=INT_MAX;
	for(int i=0;i<size;i++){
		mini=min(mini,num[i]);
	/*	if(num[i]<min){
			min=num[i];
		}*/
	}
	return mini;
}
int main(){
	int size;
	cin>>size;
	int num[1000];
	for(int i=0;i<size;i++){
		cin>>num[i];
	}
	cout<<"Maximum value is:"<<getMax(num,size)<<endl;
	cout<<"Minimum value is:"<<getMin(num,size)<<endl;
	
}
