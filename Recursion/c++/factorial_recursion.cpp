#include <iostream>
using namespace std;

int Factorial(int n){
	// Base consition
	if(n==0)
	return 1;
	
	return n*Factorial(n-1);
}
int main(){
	int n;
	cout<<"Enter the size of array:"<<endl;
	cin>>n;
	int ans= Factorial(n);
	cout<<"The factorial of n is:"<<endl;
	cout<<ans<<endl;

}
