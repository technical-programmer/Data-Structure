// insert at any position in case of doubly linked list
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
void insertAtTail(node* &tail,int d){
	node*n=new node(d);
	tail->next=n;
	n->prev=tail;
	tail=tail->next;
}

// insert at any position
void insertAtPosition(node* &head,node* &tail,int position,int d){
	
	// insert At starting
	if(position==1){
		insertAtHead(head,d);
		return;
	}
	
	
	node*temp=head;
	int cnt=1;
	while(cnt<position-1){
		temp=temp->next;
		cnt++;
	}
	// inserting at last position
	if(temp->next==NULL){
		insertAtTail(tail,d);
		return;
	}
	// creating a node for d;
	node* nodeToInsert= new node(d);
	nodeToInsert->next=temp->next;
	temp -> next->prev=nodeToInsert;
	temp->next=nodeToInsert;
	nodeToInsert->prev=temp;	
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
	node*tail=node1;
	insertAtHead(head,12);
	insertAtHead(head,15);
	insertAtTail(tail,16);
	insertAtTail(tail,18);
	insertAtPosition(head,tail,1,20);
	insertAtPosition(head,tail,7,52);
	insertAtPosition(head,tail,3,32);	
	
	print(head);
	cout<<"head:"<<head->data<<endl;
	cout<<"tail:"<<tail->data<<endl;

	
}
