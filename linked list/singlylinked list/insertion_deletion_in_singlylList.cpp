// insertion and deletion at any position in a  singly linked list o
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
    
    // destructor
    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory free of node with data:"<<value<<endl;
    }
};

// insert At head in linked list

void insertAtHead(node* &head,int d){
    node*n=new node(d);
    n->next=head;
    head=n;
}

// insert At end in linked list
void insertAtEnd(node* &tail,int d){
    node*n=new node(d);
    tail->next=n;
    tail=tail->next;
}

//insert At any position in linked list
 void insertAtPosition(node* &head,node* &tail,int position,int d){
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    
    node*temp=head;
    int cnt=1;
    while(cnt<=position-1){
        temp=temp->next;
        cnt++;
    }
    
    // creating a new node for d;
    node*nodeToInsert=new node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
    
    // insert At last node
    if(temp->next==NULL){
        insertAtEnd(head,d);
        return;
    }
}

// deleting the node at any position

  void deleteNode(node* &head,int position){
     if(position==1){
         node*temp=head;
         head=head->next;
         // memory free 
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
        //memory free node
        curr->next=NULL;
        delete curr;
    }
 
 }

// traversing the linked list
void display(node* &head){
    node* temp=head;
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
    insertAtEnd(tail,18);
    insertAtEnd(tail,21);
    insertAtPosition(head,tail,5,22);
    deleteNode(head,4);
    display(head);
    cout<<"head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;


    
    
}
