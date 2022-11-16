#include <iostream>
#include <stack>
using namespace std;
class node{
	public:
		int data;
		node*next;
		
		node(int d){
			data=d;
			next=NULL;
		}
};
class Stack{
	public:
		node*top;
		Stack(){
			top=NULL;
			
		}
		
		void push(int element){
			node*n=new node(element);
			n->next=top;
			top=n;
		}
		void pop(){
			if(top==NULL){
				cout<<"stack underflow"<<endl;
			}
			node*temp=top;
			top=top->next;
			delete temp;
	
		}
		
		int peek(){
			if(top==NULL){
				cout<<"stack is empty"<<endl;
				return -1;
			}
			else{
				return top->data;
			}
		}
			
			bool isEmpty(){
				if(top==NULL){
					return true;
				}
				else{
					return true;
				}
			}
		
};
int main(){
	Stack s;
	s.push(22);
	s.push(34);
	cout<<"the top element is "<<s.peek()<<endl;
	s.pop();
	cout<<"the top element is "<<s.peek()<<endl;
	s.pop();
	cout<<"the top element is "<<s.peek()<<endl;
	
	
	
}
