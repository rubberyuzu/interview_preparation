#include <iostream>
using namespace std;

struct node{
	int value;
	struct node* point;
};

void delete_node(int i, struct node* node){
	struct node* current = node;
	
	for (int j = 0; j < i-1; ++j){
		current = current->point; 
	}
	current->point = current->point->point;

}

int main(){
	struct node node4;
	node4.value = 10;
	node4.point = NULL;
	struct node node3;
	node3.value = 8;
	node3.point = &node4;
	struct node node2;
	node2.value = 6;
	node2.point = &node3;
	struct node node1;
	node1.value = 4;
	node1.point = &node2;
	struct node head;
	head.point = &node1;

	printf("head -> %d\n", head.point->value);
	printf("node1 -> %d\n", node1.point->value);
	printf("node2 -> %d\n", node2.point->value);
	printf("node3 -> %d\n", node3.point->value);
	// printf("node1 -> %d\n", node1.point->value);
	printf("%s\n","--------------------");
	delete_node(1, &head);
	printf("head -> %d\n", head.point->value);
	printf("node1 -> %d\n", node1.point->value);
	printf("node2 -> %d\n", node2.point->value);
	printf("node3 -> %d\n", node3.point->value);
	// printf("node1 -> %d\n", node1.point->value);

}
