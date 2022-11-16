// INSERT AT  all position in linked list
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
	
    ~node(){
    	int value=this->data;
    	if(this->next!=NULL){
    		delete next;
    		this->next=NULL;
		}
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
void insertAtPosition(node* &head,int position,int val){
	// if we want to insert at first position
	if(position==1){
		insertAtHead(head,22);
		return;
	}
	node*temp=head;
	int cnt=1;
	while(cnt<=position-1){
		temp=temp->next;
		cnt++;
	}
	
	
	// creating a new node for d
	node* nodeToInsert=new node(val);
	nodeToInsert->next=temp->next;
	temp->next=nodeToInsert;
	
	// if we want to insert at last position
	if(temp->next==NULL){
		insertAtEnd(head, val);
		return;
	}
	
}

void deleteNode(node* &head,int position){
	if(position==1){
		node*temp=head;
		head=head->next;
		temp->next=NULL;
		delete temp;
		
	}
	else{
		node*n=ne
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
	node*tail=n1;
	insertAtHead(head,12);
	insertAtHead(head,13);
	insertAtEnd(tail,16);
	insertAtPosition(head,4,22);
	deleteNode(head,1);
	display(head);
	cout<<"head is:"<<head->data<<endl;
	cout<<"tail is:"<<tail->data<<endl;
	
}
