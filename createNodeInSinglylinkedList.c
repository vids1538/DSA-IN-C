#include<stdio.h>
#include<stdlib.h> // for malloc function that dynamically allocate the memory runtime from heap memory 
typedef struct node{
	int data;
	struct node* next;
}node;
int main()
{
	node *head;
	head=(node*)malloc(sizeof(node));
	head->data=5;
	head->next=NULL;
	printf("first node created succesfully \n");
	printf("node is %d",head->data);
}