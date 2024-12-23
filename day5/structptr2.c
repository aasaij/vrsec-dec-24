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
//	struct Employee emp = {
//			1001, "Ashritha", 900000};
//	struct Employee emp = {1002};
	struct Employee emp = {.salary = 1000000,.name = "Yatheesh", .id=1010};

	//structure pointer declaration
	struct Employee *ptr; 
	ptr = &emp;
	printEmployee(ptr);	
	return 0;
}