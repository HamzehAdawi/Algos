#include <iostream> 

using namespace std;

struct Node {
	int value; 
	struct Node *left; 
	struct Node *right;

	Node(int value) {
		this->value = value;
		left = NULL;
		right = NULL;
	}
	
};

class DfsTree {
public:

	void dfs(struct Node* node) {

		if (node == NULL) {return;}
	
		cout << node->value << " ";
	
		dfs(node->left);
		dfs(node->right);	
	}
};

int main() {

	struct Node* root = new Node(1);

	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->right = new Node(6);

	DfsTree dfsTree;
	dfsTree.dfs(root); 

	return 0;
}
