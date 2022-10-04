#include <iostream>
using namespace std;
int fibonacci(int n){
	// Base case
	if(n==0)
	return 0;
	if(n==1)
	return 1;
	
	
	int fib= fibonacci(n-1)+fibonacci(n-2);
	return fib;
	
	
	
}
int main(){
	int n, i=0;
	cout<<"Enter the size :"<<endl;
	cin>>n;
/*	while(i < n) {
      cout<< fibonacci(i)<<endl;
      i++;
   }*/
   
   for(int i=0;i<n;i++){
   	cout<<fibonacci(i)<<" ";
   }
}
