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
		
		~node(){
			int value=this->data;
			if(next=NULL){
				delete next;
				next=NULL;
			}
			cout<<"memory free with node for data:"<<value<<endl;
			
		}
};
void insertAtHead(node* &head,node* &tail,int d){
	if(head==NULL){
		node*n=new node(d);
		head=n;
		tail=n;
		
	}
	else{
		node*n=new node(d);
		n->next=head;
		head->prev=n;
		head=n;	
	}
}
void insertAtTail(node* & head,node*&tail,int d){
	if(tail==NULL){
		node*n=new node(d);
		tail=n;
		head=n;
	}
	else{
	node*n=new node(d);
	 tail->next=n;
	 n->prev=tail;
	 tail=tail->next;
	}

}
void deleteNode(node* &head,int position){
	if(position==1){
		// deletion at ist position
		node*temp=head;
		temp->next->prev=NULL;
		head=temp->next;
		temp->next=NULL;
		delete temp;
	}
	else{
		//deletion at middle and at last
		node*curr=head;
		node*prev=NULL;
		int cnt=1;
		while(cnt<position){
			prev=curr;
			curr=curr->next;
			cnt++;
		}
		curr->prev=NULL;
		prev->next=curr->next;
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
	node*head=NULL;
	node*tail=NULL;
	insertAtHead(head,tail,10);
	insertAtHead(head,tail,12);
	insertAtHead(head,tail,13);
	insertAtHead(head,tail,15);
	 display(head);
	 
	 insertAtTail(head,tail,27);
	  insertAtTail(head,tail,32);
	 display(head);
	 deleteNode(head,3);
	 display(head);
	 cout<<"head:"<<head->data<<endl;
	cout<<"tail:"<<tail->data<<endl;
	
	
}
