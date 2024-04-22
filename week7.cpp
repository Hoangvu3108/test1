#include<stdio.h>
typedef struct Node{
	int value;
	struct Node *nextNode;
}Node;
	Node *makeNode(int v )	{
	Node *head =makeNode(v:10);
	Node*secondNode=makeNode(v:20);
	Node*thirdNode=makeNode(v:30);
	Node* fourthNode=makeNode(v:40);
	head->nextNode =secondNode;
	secondNode->nextNode =thirdNode;
	thirdNode->nexNode =fourthNode;
	fourNode-> nextNode=NULL;
	return head;
}
void iteratelist(Node*head){
	Node *iter=head;
	while (iter!=Null){
		printf("Value :%d \n",iter->value);
	}
}

};
