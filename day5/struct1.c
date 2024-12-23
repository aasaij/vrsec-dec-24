#include <stdio.h>
#include <string.h>
struct Employee {
	int id;
	int age;
	char name[28];
	float salary;
}emp;

void print(){
	printf("Employee Name : %s", emp.name);
}

int main(){
	//structure variable declaration
//	struct Employee emp;
	emp.id = 101;
//	emp.name = "Bhuavanachandra";
	strcpy(emp.name, "Bhuvanachandra");
	emp.salary = 500000;
	
	printf("Employee ID   : %d\n", emp.id);
	printf("Employee Name : %s\n", emp.name);
	printf("Salary        : %.2lf/month\n", emp.salary);
	
	printf("Size of an Employee : %lu\n", sizeof(emp));
	printf("Size of an Employee : %lu\n", sizeof(struct Employee));
//	print();
	
	return 0;
}

