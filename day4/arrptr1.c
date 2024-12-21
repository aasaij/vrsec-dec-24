//Program to demonstrate pointers and arrays
#include <stdio.h>

int main(){
    int arr[]= {10,20,30,40};
    int size = sizeof(arr)/sizeof(arr[0]);
//    printf("%d", *arr);
//    printf("\n%p", arr);
//    printf("\n%p", arr+2);
//    printf("\n%d", *(arr+2));
//    printf("\n%d", *arr+2);       
    
    for (int i = 0; i<size; i++)
    	printf("%p = %d\n", arr+i, *(arr+i));
    	
    return 0;
}