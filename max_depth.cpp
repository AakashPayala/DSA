#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int value;
	Node *left, *right;

	Node(int val)
	{
		this->value = val;
		this->left = this->right = NULL;
	}
};

int maxDepth(Node *root)
{

	if (root == NULL)
		return 0;

	int leftDepth = maxDepth(root->left);
	int rightDepth = maxDepth(root->right);

	if (leftDepth > rightDepth)
		return leftDepth + 1;
	else
		return rightDepth + 1;
}

int main()
{
	Node *root = new Node(4);
	root->left = new Node(6);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->right->left = new Node(5);
	root->right->right = new Node(6);
	root->right->right->left = new Node(8);
	root->right->left->right = new Node(7);
	
	cout << "MAXIMUM DEPTH OF YOUR TREE : " << maxDepth(root) << endl;
}