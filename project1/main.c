#include <stdio.h>
#include <stdlib.h>
#include "myHeader.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, numberofNode;
	
	struct Node *head = (struct Node *) malloc (sizeof(struct Node));
	printf("Enter data : ");
	scanf("%d", &head->data);
	head->next = NULL;
	
	printf("Data = %d", head->data);
	
	return 0;
}
