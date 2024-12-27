//Program to implement Queue Data Structure
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct person {
	int id;
	char name[30];	
}Person;
typedef struct queue{
	int capacity;
	int front;
	int rear;
	Person *persons;
}Queue;
Queue *createQueue(int queueSize){
	Queue *temp =(Queue *)calloc(1, sizeof(Queue));
	temp->capacity = queueSize;
	temp->front = temp->rear = -1;
	temp->persons =(Person*)calloc(queueSize, sizeof(Person));
	return temp;
}
bool isFull(Queue *q){
	return (q->rear + 1 == q->capacity);
}
bool isEmpty(Queue *q){
	return (q->rear == -1 && q->front==-1);
}
bool enqueue(Queue *q, Person p){
	if (isFull(q))
		return false;
	if (q->front==-1) q->front++;
//	q->rear++;
	q->persons[++(q->rear)]=p;
	return true;
}
Person* dequeue(Queue *q){
	if (isEmpty(q))
		return NULL;
	else
		return &(q->persons[(q->front)++]);
}
void printQueue(Queue* q){
	if (!isEmpty(q)){ // queue is not empty
		int i;
		printf("{\n");
		for(i = q->front; i<q->rear; i++)
			printf("[%d %s],\n",q->persons[i].id,q->persons[i].name);
		printf("[%d %s]\n",q->persons[i].id,q->persons[i].name);			
		printf("}\n");
	}
	else{
		printf("Queue is empty\n");
	}
}
Person *getPerson(){
	Person *p =(Person*) calloc(1, sizeof(Person));
	printf("Person Id   : ");
	scanf("%d", &p->id);
	printf("Person Name : ");
	scanf("%s", p->name);
	return p;
}
void printMainMenu(){
	printf("\nQueue Demo Application\n");
	printf("**********************\n");
	printf("1. Enqueue\n");
	printf("2. Dequeue\n");
	printf("3. Print Queue\n");
	printf("4. Exit\n");
	printf("Enter your choice : ");
}
int main(){
	Queue *app;
	int qSize;
	scanf("%d", &qSize);
	app = createQueue(qSize);
	while(true){
			int choice;
			printMainMenu();
			scanf("%d", &choice);
			switch(choice){
				case 1:
					printf("%s\n", enqueue(app, *getPerson())?"Queued..":"Queue is Full!");
					break;
				case 2:{
					Person *p = dequeue(app);
					if (p){
						printf("%d %s\n", p->id, p->name);						
					}
					else
						printf("Queue is empty!");
					break;
				}
				case 3:
						printQueue(app); break;
				default:
					printf("Thank you for being very very silent in the class!");
					exit(0);					
			}
	}
	return 0;	
}