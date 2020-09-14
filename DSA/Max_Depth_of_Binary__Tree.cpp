#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define pi (3.141592653589)
using namespace std;


// node
struct Node 
{ 
    int data; 
    struct Node* left, *right; 
};


//function to create new node
Node *newNode(int data) 
{ 
    Node *temp = new Node; 
    temp->data = data; 
    temp->left = temp->right = NULL; 
    return (temp); 
} 


//function to find the maximum depth(height) of binary tree
int maxDepth(Node* root){
	if(root == NULL){
		return 0;
	}
	
	int left  = maxDepth(root->left);
	int right = maxDepth(root->right);
	
	int depth     = max(left,right)+1;
	
	return depth;
}


//main function
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cout << fixed;
	cout.precision(10);
	
	Node *root     = newNode(1); 
    root->left     = newNode(2); 
    root->right     = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
    cout <<"The minimum depth of binary tree is : "<< maxDepth(root); 
    
	return 0;
}

