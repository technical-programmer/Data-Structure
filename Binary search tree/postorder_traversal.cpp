#include <iostream>
#include <queue>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node*buildTree(node*root){
    cout<<"Enter the data:"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    
    
    if(data==-1){
        return NULL;
    }
    
    cout<<"Enter the value to insert in left of :"<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the value to insert in right of:"<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

void postOrder(node*root){
	if(root==NULL){
		return;
	}
	postOrder(root->left);
	postOrder(root->right);
	cout<<root->data<<" ";
}
int main(){
    node*root=NULL;
    root=buildTree(root);
    
    
    // 1 3 7 -1  -1 11 -1 -1 5 17 -1 -1 -1
     
    cout<<"printing the inorder traversal"<<endl;
    postOrder(root);
    return 0;
    
    
}
