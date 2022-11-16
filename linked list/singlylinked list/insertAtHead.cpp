// insertion at head in linked list
#include <iostream>
using namespace std;
class node{
	public:
		int data;
    	node*next;
    	
	node(int val){
		data= val;
		next=NULL;
	}
};
void insertAtHead(node* &head,int val){
	node*n=new node(val);
	n->next=head;
	head=n;
}
void insertAtEnd(node* &tail,int val){
	node*n=new node(val);
	tail->next=n;
	tail=tail->next;
}
void display(node* &head){
	node*temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main(){
	node*n1=new node(10);
	node*head=n1;
	node*tail=n1;
	insertAtHead(head,12);
	insertAtHead(head,13);
	insertAtHead(head,15);
	insertAtEnd(tail,16);
	insertAtEnd(tail,20);
	insertAtEnd(tail,40);
	display(head);
	
}
