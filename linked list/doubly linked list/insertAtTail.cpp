// insertion At head in case of doubly linked list
#include <iostream>
using namespace std;
class node{
	public:
	   int data;
	   node*prev;
	   node*next;
		
	node(int d){
		data=d;
		prev=NULL;
		next=NULL;
	}
};
void insertAtTail(node* &tail,int d){
	node*n=new node(d);
	tail->next=n;
	n->prev=tail;
	tail=tail->next;
}
void print(node* &head){
	node*temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int getLength(node* &head){
	int len=0;
		node*temp=head;
	while(temp!=NULL){
		len++;
		temp=temp->next;
	}
   return len;
	
}
int main(){
	node*node1=new node(10);
	node*head=node1;
	node*tail=node1;
	insertAtTail(tail,12);
	insertAtTail(tail,15);
	insertAtTail(tail,18);
	print(head);
cout<<getLength(head)<<endl;

	
}
