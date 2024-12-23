//Program to demonstrate structure within structure --> nested structure
#include <stdio.h>
#include <string.h>
//struct Date{
//	int dd;
//	int mm;
//	int yy;
//};
//struct Employee {
//	int id;
//	char name[28];
//	float salary;
//	struct Date doj; //nested structure
//}emp;
struct Employee {
	int id;
	char name[28];
	float salary;
	//Nested structure
	struct {
		int dd, mm,yy;
	}doj;
}emp;

int main(){
	struct Employee emp;
	emp.id = 1001;
	strcpy(emp.name, "Jyothsna");
	emp.salary = 500000;
	emp.doj.dd =10;
	emp.doj.mm =10;
	emp.doj.yy =2026;
	printf("Employee ID     : %d\n", emp.id);
	printf("Employee Name   : %s\n", emp.name);
	printf("Salary          : %.2lf/month\n", emp.salary);	
	printf("Date if Joining : %d/%d/%d\n", emp.doj.dd,emp.doj.mm,emp.doj.yy);	
	return 0;
}