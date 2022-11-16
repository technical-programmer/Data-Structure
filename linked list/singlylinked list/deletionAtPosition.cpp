// deletion  at any position  in linked list
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
/*	// destructor
	~node(){
		int value=this->data;
		// memory free 
		if(this->next !=NULL){
			delete next;
			this->next=NULL;
		}
		cout<<"memory is free of node with data:"<<value<<endl;
	}*/
};
void insertAtHead(node* &head,int val){
	node*n=new node(val);
	n->next=head;
	head=n;
}
void deleteNode(node* &head,int position){
	// deleting first node
	if(position==1){
		node*temp=head;
		head=head->next;
		//memory free start node
		temp->next=NULL;
		delete temp;
		
	}
	else{
		node*curr=head;
		node*prev=NULL;
		int cnt=1;
		while(cnt<position){
			prev=curr;
			curr=curr->next;
			cnt++;
			
		}
		prev->next=curr->next;
		// memory free node
		curr->next=NULL;
		delete curr;
			
	}
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
	insertAtHead(head,12);
	insertAtHead(head,13);
	insertAtHead(head,15);
	deleteNode(head,4);

	display(head);
	
}
