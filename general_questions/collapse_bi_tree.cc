#include <iostream>
#include <list>

using namespace std;

struct node {
	int data;
	struct node* left;
	struct node* right;
};

void collapse_bi_tree(struct node* N, list<int> L){

	if (N->left != NULL){
		cout << "coming in if in collapse_bi_tree" << endl;
		collapse_bi_tree(N->left, L);

	}
	L.push_back(N->data);
	if (N->right != NULL){
		collapse_bi_tree(N->right, L);
	}
}

void print_list(list<int> L){
	for(list<int>::iterator it=L.begin(); it != L.end(); it++){
		cout << *it << endl;
	}
}

int main(){
	list<int> L;
	node N;
	N.data = 15;
	N.left = new node;
	N.left->data = 10;
	// N.left->left->data = 4;
	// N.left->right->data = 12;
	N.right = new node;
	N.right->data = 20;
	// N.right->left->data = 13;
	// N.right->right->data = 23;

	collapse_bi_tree(&N, L);
	print_list(L);

}