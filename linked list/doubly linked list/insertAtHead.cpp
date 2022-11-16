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
void insertAtHead(node* &head,int d){
	node*n=new node(d);
	n->next=head;
	head->prev=n;
	head=n;
}
void print(node* &head){
	node*temp=head;
//	int cnt=0;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	//	cnt++;
	}
	cout<<endl;
//	cout<<"the length of node is:"<<cnt<<endl;
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
	insertAtHead(head,12);
	insertAtHead(head,15);
	print(head);
cout<<"the length is :"<<getLength(head)<<endl;

	
}
