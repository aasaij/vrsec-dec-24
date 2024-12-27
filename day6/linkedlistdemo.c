//Program to demonstrate linkedList
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	char element;
	struct node *nxt;
}Node;

Node* createNode(char data){
	Node* temp =(Node*)calloc(1,sizeof(Node));
	temp->element = data;
	return temp;
}
void printList(Node* list){
	if (list){ // list is not empty
		Node* temp;
		printf("\n[");		
		for (temp=list; temp->nxt; temp=temp->nxt)
			printf("'%c',", temp->element);
		printf("'%c']\n", temp->element);			
	}
	else{
		printf("\n[]\n");
	}
}
int length(Node *list){
	int cnt = 0;
	if (list){
		for(Node* temp = list; temp; temp=temp->nxt, cnt++);
	}
	return cnt;
}
Node* addNodeFirst(Node* list, char data){
	Node* newNode = createNode(data);
	newNode->nxt = list;
	list = newNode;
	return list;
}
Node* addNodeLast(Node* list, char data){
	//Creating a new node
	Node* newNode = createNode(data);
	if (list){//list is not empty
		Node* temp;
		//Moving the temp pointer to the last node
		for (temp=list;temp->nxt;temp = temp->nxt);
		temp->nxt = newNode;
		return list;
	}
	return newNode;
}
Node* addAtPosition(Node* list, char element, int position){
	if (position == 0 || position == 1)
		return addNodeFirst(list, element);
	//1. list should not empty
	//2. Position should be greater than 2
	//3. list should contain at least 2 nodes
	if (list && position > 1 && list->nxt){
		Node *temp=list;
		//moving temp pointer to position-1 node
		for (int i = 2; i<position && temp; i++)
			temp = temp->nxt;
		//checking whether the position is reached end of the list
		if (temp->nxt){//if not insert the node 
			Node *newNode = createNode(element);
			newNode->nxt = temp->nxt;
			temp->nxt = newNode;
		}
	}
	return list;
}
Node* deleteFirstNode(Node* list){
	if(list){
		Node* temp =list;
		list = temp->nxt;
		free(temp);
	}
	return list;
}
Node* deleteLastNode(Node* list){
	if (list){//list is not empty
		if (list->nxt==NULL){//checking whether list is having only one node
			free(list);
			return NULL;
		}
		//list is having more than one node
		Node *temp = list;
		while(temp->nxt->nxt) temp = temp->nxt;
		free(temp->nxt);
		temp->nxt = NULL;
	}
	return list;
}
Node* deleteAtPosition(Node* list, int position){
	if (position == 0 || position == 1)
		return deleteFirstNode(list);	
	if (position > 1 && list && list->nxt){ 
		Node *temp = list;
		for(int i = 2; i<position && temp;i++)
			temp=temp->nxt;
		if(temp->nxt){
			Node *t = temp->nxt;
			temp->nxt = t->nxt;
			free(t);
		}		
	}
	return list;
}
Node *findNode(Node *list, char data){
	if(list){
		Node *temp;
		for(temp = list; temp;temp=temp->nxt){
			if (temp->element==data)
				return temp;
		}
	}
	return NULL;
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
	printf("\t8. Find Length\n");
	printf("\t9. Find Node\n");
	printf("\t10. Exit\n");
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
				root = addNodeFirst(root, getElement()); break;
			case 2:
				root = addNodeLast(root, getElement()); break;
			case 3:
				root = addAtPosition(root, getElement(), getPosition()); break;
			case 4:
				root = deleteFirstNode(root); break;
			case 5:
				root = deleteLastNode(root); break;
			case 6:
				root = deleteAtPosition(root, getPosition()); break;
			case 7:
				printList(root); break;
			case 8:
				printf("Length : %d\n", length(root)); break;
			case 9:
				printf("%s\n",findNode(root, getElement())?"Found":"Not Found"); break;				
			default:
				printf("Thank you so much for being very kind.....\n");
				exit(0);			
		}
	}	
	return 0;
}
//Attendance Link : https://bit.ly/CC-241224
//Trainer : Tambi
//Session : AN




