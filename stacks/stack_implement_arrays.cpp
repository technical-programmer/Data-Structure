#include <iostream>
#include <stack>
using namespace std;
class Stack{
	// properties
	public:
	int*arr;
	int top;
	int size;
	// behavior(constructor)
	Stack(int s){
		size=s;
		arr=new int[s];
		top=-1;
	}
	void push(int element){
		if(size - top>1){
			top++;
			arr[top]=element;
		}
		else{
			cout<<"stack overflow:"<<endl;
			
		}
		
	}
	void pop(){
	 if(top>=0){
	 	top--;
	 }
	 else{
	 	cout<<"stack underflow"<<endl;
	 }
		
	}
	int peek(){
		if(top>=0){
		    return arr[top]; 
		   
		}
		else{
			cout<<"stack is empty"<<endl;
			 return -1;
		}
		 
	}
	
	bool isEmpty(){
		if(top==-1){
			return true;
		}
		else{
			cout<<"Stack is not empty"<<endl;
			return false;
		}
	}
	
};
int main(){
    Stack st(5);
	st.push(22);
	st.push(32);
	st.push(32);
	st.pop();
	st.pop();
	//st.pop();
	cout<<"top element is :"<<st.peek()<<endl;
	if(st.isEmpty()){
		cout<<"stack is empty"<<endl;
	}
	else{
		cout<<"stack is not empty "<<endl;
	}
}

