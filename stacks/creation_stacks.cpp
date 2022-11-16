#include <iostream>
#include <stack>
using namespace std;
int main(){
	// creation of stacks
	stack <int> s;
	
	// push
	s.push(2);
	s.push(3);
	
	// pop
	s.pop();
	
	cout<<"print the top element:"<<s.top()<<endl;
	cout<<"print the size of element:"<<s.size()<<endl;
	
	if(s.empty()){
		cout<<"stack is empty"<<endl;
	}
		else{
			cout<<"stack is not empty"<<endl;
		}
	
}
