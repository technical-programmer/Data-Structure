#include <iostream>
#include <queue>
using namespace std;
int main(){
	queue<int> q;
	q.push(10);
	q.push(12);
	q.push(15);
	q.pop();
	q.pop();
	cout<<"the front is:"<<q.front()<<endl;
	cout<<"the size is:"<<q.size()<<endl;
	q.pop();
	
	if(q.empty()){
		cout<<"queue is  empty"<<endl;
	}
	else{
		cout<<"queue is  not empty"<<endl;
	}
}
