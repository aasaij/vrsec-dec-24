//Program to demonstrate array of structures
#include <stdio.h>
struct Employee {
	int id;
	char name[25];
	float salary;
};
void printline(){
	for (int i = 1; i<=43; i++)
		printf("*");
	printf("\n");
}
void printHeading(){
	printline();
	printf("Emp.ID Employee Name%12s Salary\n","");
	printline();
}
int main(){
	int n;
	scanf("%d", &n);
	struct Employee emps[n];
	for (int i = 0; i<n; i++)
		scanf("%d %s %f", &emps[i].id, emps[i].name, &emps[i].salary);
	printHeading();	
	for (int i = 0; i<n; i++)
		printf("%6d %-25s %10.2f\n", emps[i].id, emps[i].name, emps[i].salary);
	printline();	
	return 0;
}