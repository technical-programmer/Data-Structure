#include <iostream>
using namespace std;
int countingStairs(int n){
	if(n<0)
	return 0;
	if(n==0)
	return 1;
	 
	 return countingStairs(n-1)+countingStairs(n-2);
}
int main(){
	int n;
	cout<<"Enter the size:"<<endl;
	cin>>n;
	cout<<countingStairs(n);
}
