#include <iostream>
using namespace std;
int power(int n){
	if(n==0)
	return 1;
	
	 return 2*power(n-1);
}
int main(){
	int n;
	cout<<"Enter the size :"<<endl;
	cin>>n;
	
	cout<<"The power of  2^n is :"<<endl;
	cout<<power(n);
}
