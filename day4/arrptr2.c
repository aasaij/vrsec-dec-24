//Program to demonstrate pointers and arrays
#include <stdio.h>

int main(){
    int arr[]= {10,20,30,40};
    int size = sizeof(arr)/sizeof(arr[0]);   
	int *ptr, i;
	ptr = arr; 
//	ptr+=3;  
//	arr+=3;  --> error
//    printf("%d %d", *ptr, *arr);
//    printf("%d %d", ptr[-1], ptr[-2]);
//    printf("%d %d", arr[-1], arr[-2]);
	//Printing array elements using pointer
	for (i = 0, ptr = arr;i<size; i++)
		printf("%d ", *ptr++);
    return 0;
}