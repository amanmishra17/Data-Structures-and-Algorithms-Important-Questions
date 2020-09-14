#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define pi (3.141592653589)
using namespace std;

//node
struct Node {
	int data;
	Node* left,*right;
};


//create new node
struct Node* newNode(int data){
	struct Node* Node = (struct Node*)malloc(sizeof(struct Node));
	Node->data = data;
	Node->left = Node->right = NULL;
	
	return Node;
}


//to find lowest common ancestor...logic is that
/*If the value of the current node is less than both n1 and n2, then LCA lies in the right subtree. 
Call the recursive function for thr right subtree
If the value of the current node is greater than both n1 and n2, then LCA lies in the left subtree. Call the recursive function for thr left subtree.
If both the above cases are false then return the current node as LCA.*/

struct Node* lca(Node*root,int n1,int n2){
	if(root == NULL)
	return NULL;
	
	
	if(root->data > n1 and root->data > n2)
	return lca(root->left,n1,n2);
	
	if(root->data < n1 and root->data < n2)
	return lca(root->right,n1,n2);
	
	return root;
}


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cout << fixed;
	cout.precision(10);
	
	struct Node *root        = newNode(20); 
    root->left               = newNode(8); 
    root->right              = newNode(22); 
    root->left->left         = newNode(4); 
    root->left->right        = newNode(12); 
    root->left->right->left  = newNode(10); 
    root->left->right->right = newNode(14); 
  
	int n1 = 10, n2 = 14; 
	
	struct Node *t = lca(root, n1, n2); 
	
	cout << "lca of the given number is "<<t->data;
	
	return 0;
}

