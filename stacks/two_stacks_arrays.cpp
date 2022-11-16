// two stacks in an array
#include <iostream>
using namespace std;
class Stack{
	public:
		int*arr;
		int top1;
		int top2;
		int size;
		
		Stack(int s){
			size=s;
			top1=-1;
			top2=s;
		}
	void push1(int num){
	top1++;
	if(top2-top1>1){
		arr[top1]=num;
	}
	else{
		cout<<"stack overflow"<<endl;
	}
}
void push2(int num){
	if(top2-top1>1){
		top2--;
		arr[top2]=num;
	}
	else{
		cout<<"stack overflow"<<endl;
	}
}
int  pop1(){
	if(top1>=0){
		int ans=arr[top1];
		top1--;
	  	return ans;
	}
	else{
		cout<<"stack underflow "<<endl;
		return -1;
	}
}
int  pop2(){
	if(top2>=0){
		int ans=arr[top2];
		top2--;
	  	return ans;
	}
	else{
		cout<<"stack underflow "<<endl;
		return -1;
	}
}
};

int main(){
	
}
