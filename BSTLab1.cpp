#include <iostream>

using namespace std;

// Implement the node class we will need for our Binary Search Tree
class Node {
	public:
		// the Node should contain
		// 	- an integer "key" that holds the value of the Node
		int key;
		// 	- a pointer to each child possible child node ("right" and "left")
        Node * right;
		Node * left;

		// Write a constructor for the Node
		Node(int d){
			key = d;
			right = nullptr;
		    left = nullptr;
		}
		// input: only an integer value for "key", no pointer arguments
		// 		right and left pointers should be null

};


// Use this function to create a Binary Search Tree (BST) tree with the following values
// {13, 0, 7, 6, 21, 15, -2, 12, 99, 18, 19, -1}
Node* createTree() {
	// root
	Node *root = nullptr;

	// level 1 (children of root)
    root -> right = 12; 
	root -> left = 0;
	// level 2 (children of 0)
   root -> left -> right = 7;
   root -> left -> left =-2;
   // level 2 (children of 21)
      root -> right -> left = 15 ;
   root -> right -> right = 99;
	// level 3 (children of -2)
     root -> left -> left -> left = -1;
	// level 3 (children of 7)
     root -> left -> right -> right = 12;
	 root -> left -> right -> left = 6;;
	// level 3 (children of 15)
    root -> right -> left -> right= 18;
	// level 3 (children of 99)
        root -> right -> right -> right = nullptr;
	// level 4 (children of 18)
    root -> right -> left -> right -> right = 19;
	return root;
}

// Write a function that will search the BST for a target value
//	input: integer target to search for,
			// pointer to root Node
// 	returns: true or false depending on if the value is found
// You should write this function recursively! What is the base case? What is the general case?
bool searchTree(int target, Node* root) {
	if(root == nullptr){
	return false;
	} if (root-> key == target){
		return true;
	} if(target < root->key){
		return searchTree(target , root -> left);
	}
	// General case
	return searchTree(target, root -> right);
	
}

// Write a function that will return the total number of Nodes in the tree
// 	input: pointer to the root Node
// 	returns: number of nodes currently in the tree
// You should write this function recursively!
int treeSize(Node* root) {
      if(root == nullptr){return 0;}

	
	return 1+ treeSize(root-> left) + treeSize(root->right);

}

// BONUS! Write a function that will determine the height of the tree
int treeHeight(Node* root) {
	// base case
	return -1;

	// General case
	return -1;
}
