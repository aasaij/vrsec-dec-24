//Program to demonstrate doubly linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	struct node *prev;
	char element;
	struct node *nxt;
}Node;

Node* createNode(char data){
	Node* temp =(Node*)calloc(1, sizeof(Node));
	temp->element = data;
	return temp;
}
Node* addFirst(Node* list, char element){
	Node* newNode = createNode(element);
	if (list){ // list is not empty
		newNode->nxt = list;
		list->prev = newNode;
		list = newNode;
		return list;
	}
	return newNode;
}
Node* addLast(Node* list, char element){
	Node* newNode = createNode(element);
	if (list){//if list is not empty
		Node* temp = list;
		//moving the temp pointer to the last node
		while(temp->nxt) temp = temp->nxt;
		temp->nxt = newNode;
		newNode->prev = temp;
		return list;
	}
	return newNode;
}
Node* addAtPosition(Node* list, char element, int position){
	if (position == 0 || position == 1)
		return addFirst(list, element);
	if ( position  > 1 && list && list->nxt){
		Node *newNode = createNode(element);
		Node *temp=list;
		for (int i = 2; i<position && temp; temp=temp->nxt, i++);
		if (temp->nxt){
			newNode->nxt = temp->nxt;
			temp->nxt->prev = newNode;
			newNode->prev = temp;
			temp->nxt = newNode;
		}
	}
	return list;
}
Node* deleteNode(Node* node){
	free(node);
	return NULL;
}

Node* deleteFirst(Node* list){
	if (list){
		if (list->nxt==NULL)
			return deleteNode(list);		
		Node* temp = list;
		list = temp->nxt;
		list->prev = NULL;
		free(temp);		
	}
	return list;
}
Node* deleteLast(Node* list){
	if (list){
		if (list->nxt==NULL)
			return deleteNode(list);
		Node* temp;
		for (temp=list; temp->nxt->nxt; temp=temp->nxt);
		free(temp->nxt);
		temp->nxt = NULL;		
	}
	return list;
}
Node* deleteNodeByElement(Node* list, char element){
	
}
Node* deleteAtPosition(Node* list, int position){
	if (position == 0 || position == 1)
		return deleteFirst(list);
	if (position >1 && list && list->nxt){
		Node* temp= list;
		for (int i =2; i<position && temp; temp=temp->nxt, i++);
		if (temp->nxt){
			Node *t = temp->nxt;
			temp->nxt = t->nxt;
			if (t->nxt)
				t->nxt->prev = temp;
			free(t);
		}		
	}
	return list;
}

void printList(Node* list){
	if (list){
		printf("\nForward Traversal\n[");
		Node* temp;
		for (temp = list; temp->nxt; temp=temp->nxt)
			printf("'%c',", temp->element);
		printf("'%c']\n", temp->element);
		printf("\nReverse Traversal\n[");
		for (; temp->prev; temp=temp->prev)
			printf("'%c',", temp->element);
		printf("'%c']\n", temp->element);		
	}
	else
		printf("\n[]\n");
}
void printMainMenu(){
	printf("\n\tLinked List Demo Application\n");
	printf("\t****************************\n");
	printf("\t1. Add First\n");
	printf("\t2. Add Last\n");
	printf("\t3. Insert at\n");
	printf("\t4. Delete First\n");
	printf("\t5. Delete Last\n");
	printf("\t6. Delete At\n");
	printf("\t7. Print List\n");	
	printf("\t8. Exit\n");
	printf("\tEnter your choice : ");
}
char getElement(){
	char ch;
	printf("Enter an element : ");
	scanf("\n%c", &ch);
	return ch;
}
int getPosition(){
	int position;
	printf("Enter the position : ");
	scanf("%d", &position);
	return position;
}

int main(){
	Node* root = NULL;
	while(1){
		int choice;
		printMainMenu();
		scanf("%d", &choice);
		switch(choice){
			case 1:
				root = addFirst(root, getElement()); break;
			case 2:
				root = addLast(root, getElement()); break;
			case 3:
				root = addAtPosition(root, getElement(), getPosition()); break;
			case 4:
				root = deleteFirst(root); break;
			case 5:
				root = deleteLast(root); break;
			case 6:
				root = deleteAtPosition(root, getPosition());break;
			case 7:
				printList(root); break;
			default:
				printf("Thank you so much for your kind cooperation!!!");
				exit(0);
		}	
	}
	return 0;
}


Assessment and Test link will be active upto 7pm
Test Link: https://tinyurl.com/44net5mr





