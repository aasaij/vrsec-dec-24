//Program to reverse an array
#include <stdio.h>
void reverse(int a[], int n){
	for (int i = 0, j =n-1; i<j; i++, j--)
		a[i] = (a[i]+a[j])-(a[j]=a[i]);
}
void printArray(int arr[], int size){
	printf("\n[");
	for (int index = 0; index<size; index++)
		printf("%d,", arr[index]);
	printf("\b]\n");
}
int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i<n; i++)
		scanf("%d", &arr[i]);
	printf("Before reversing \n");
	printArray(arr, n);
	reverse(arr, n);
	printf("After reversing \n");
	printArray(arr, n);	
	return 0;
}