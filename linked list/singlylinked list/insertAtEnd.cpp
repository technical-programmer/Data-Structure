// INSERT AT END
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
	
	insertAtEnd(tail,12);
	insertAtEnd(tail,15);
	insertAtEnd(tail,18);
	insertAtEnd(tail,21);
	display(head);
	
}
