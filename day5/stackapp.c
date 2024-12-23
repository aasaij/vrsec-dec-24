//Program to implement stack operations
#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>
struct Book{
	int id;
	char title[50];
	char author[50];
	double price;
};

struct Stack{
	int capacity; // maximum size of the stack
	int size; // actual size of stack
	struct Book *books; // elements to be stored
};
struct Stack *createStack(int max){
	struct Stack *temp = (struct Stack*)calloc(1, sizeof(struct Stack));
	temp->capacity = max;
	temp->size = -1;
	temp->books = (struct Book*)calloc(max, sizeof(struct Book));
	return temp;
}
bool isFull(struct Stack *st){
	return st->size+1 == st->capacity;
}
bool isEmpty(struct Stack *st){
	return st->size == -1;
}
struct Book *getBook(){
	struct Book *b = (struct Book*)calloc(1, sizeof(struct Book));
	printf("Book ID     : ");
	scanf("%d", &b->id);
	printf("Book Title  : ");
	scanf("%s", b->title);
	printf("Book Author : ");
	scanf("%s", b->author);
	printf("Price       : ");
	scanf("%lf", &b->price);
	return b;
}
void printBook(struct Book b){
	printf("Book ID     : %d\n", b.id);
	printf("Book Title  : %s\n", b.title);
	printf("Book Author : %s\n", b.author);
	printf("Price       : %.2lf\n", b.price);	
}
bool push(struct Stack *st, struct Book b){
	if(isFull(st))
		return false;
	st->books[++(st->size)] = b;
	return true;
}
struct Book* peek(struct Stack *st){
	if (isEmpty(st))
		return NULL;
	return &(st->books[st->size]);
}
struct Book* pop(struct Stack *st){
	if (isEmpty(st))
		return NULL;
	return &(st->books[(st->size)--]);
}
void printMainMenu(){
	printf("\nStack App Demo\n");
	printf("**************\n");
	printf("1. Push\n");
	printf("2. Pop\n");
	printf("3. Display Top element\n");
	printf("4. Exit\n");
	printf("Enter your choice : ");
}

int main(){
	int n;
	scanf("%d", &n)	;
	struct Stack *app = createStack(n);
	while(true){ //infinite loop
		int choice;
		printMainMenu();
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("%s\n", push(app, *getBook())?"Pushed":"Stack overflow");
				break;
			case 2:{
				struct Book *b = pop(app);
				if (b)
					printBook(*b);
				else
					printf("Stack is empty!");
				break;
			}
			case 3:{
				struct Book *b = peek(app);
				if (b)
					printBook(*b);
				else
					printf("Stack is empty!");
				
				break;
			}
			default:
				printf("Thank you so much for being very very active in the class!");
				return 0;
		}
	}
	return 0;
}