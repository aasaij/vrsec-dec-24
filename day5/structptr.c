//Program to demonstrate structure pointer
#include <stdio.h>
#include <string.h>
struct Employee {
	int id;
	char name[25];
	float salary;
};
void printEmployee(struct Employee *emp){
	printf("Employee ID     : %d\n", emp->id);
	printf("Employee Name   : %s\n", (*emp).name);
	printf("Salary          : %.2lf/month\n", (*emp).salary);		
}

int main(){
	//structure variable declaration
	struct Employee emp;
	//structure pointer declaration
	struct Employee *ptr; 
	ptr = &emp;
	//accessing structure members using pointer
	ptr->id = 1001;
	strcpy(ptr->name, "Tanuja");
	ptr->salary = 1500000;
	printEmployee(ptr);	
	return 0;
}