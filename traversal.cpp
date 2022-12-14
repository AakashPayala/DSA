#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void Preorder(node *root)
{
    if(root==NULL){
        return ;
    }
    cout<<root->data;
    Preorder(root->left);
    Preorder(root->right);
}

void Postorder(node *root)
{
    if(root==NULL){
        return ;
    }
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data;
    
}

void Inorder(node *root)
{
    if(root==NULL){
        return ;
    }
    Inorder(root->left);
    cout<<root->data;
    Inorder(root->right);
    
    
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right=new node(7);
    cout<<"preorder : ";
    Preorder(root);
    cout<<endl;
    cout<<"postorder : ";
    Postorder(root);
    cout<<endl;
    cout<<"inorder : ";
    Inorder(root);
    cout<<endl;
    return 0;
}
