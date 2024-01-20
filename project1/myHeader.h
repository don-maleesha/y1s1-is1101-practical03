#ifndef myHeader
#define myHeader

struct Node {
	
	int data;
	struct Node *next;
	
} Node;

struct Node *createNode(int data);
void printList(struct Node *head);

#endif
