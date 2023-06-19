#include<stdio.h>
#include<stdlib.h>

struct node {
	
	char data;
	struct node *next;
	struct node *prev;
};

void createNode(){
	
	int n,i,item;
	struct node *new_node, *p, *head;
	printf("Enter no.of nodes");
	scanf("%d",&n);
	
	printf("Enter 0'th index nodes : ");
	scanf("%d",&item);
	
	new_node = (struct node*)malloc(sizeof(struct node));
	
	new_node->data = item;
	new_node->next = NULL;
	new_node->prev = NULL;
	
	head = new_node;
	p = new_node;
	
	for(i=1; i<n; i++){
		printf("Enter next node");
		scanf("%d",&item);
		
		new_node = (struct node*)malloc(sizeof(struct node));
		new_node->data = item;
		new_node->next = NULL;
		new_node->prev = p;
		
		p->next = new_node;
		p = p->next;
		
	}
	
}

int main(){
	
	createNode();
}


