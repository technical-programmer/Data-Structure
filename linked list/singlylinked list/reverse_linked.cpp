#include <iostream>
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
void insert(node* &head,int d){
	node*n=new node(d);
	n->next=head;
	head=n;
}
node* reverseList(node* &head){
	node*prev=NULL;
	node*curr=head;
	node*forward;
	while(curr!=NULL){
		forward=curr->next;
		curr->next=prev;
		prev=curr;
		curr=forward;
	}
    return prev;
}
void print(node* &head){
	node*temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
		
	}
	cout<<endl;
}
int main(){
	node*node1=new node(10);
	node*head=node1;
	insert(head,12);
	insert(head,14);
	insert(head,15);
	insert(head,16);
	node* newnode=reverseList(head);
	print(newnode);
	
	
	
}
