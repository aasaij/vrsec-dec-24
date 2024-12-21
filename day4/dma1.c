//Program to demonstrate Dynamic Memory Allocation(DMA)
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *arr;
    int size=5;    
    // arr = (int *)malloc(size * sizeof(int));
    arr = (int*)calloc(size, sizeof(int));
    arr[0] = 100;
    arr[1] = 200;
    size = 10;
    arr =(int*) realloc(arr, size * sizeof(int));
    free(arr);
    return 0;
}
Attendance Link : https://bit.ly/RA-211224
Trainer : Tambi
Session : AN

Test Link : https://tinyurl.com/5848fhs2

//stdlib.h
//
//malloc()
//	void* malloc(size_t numBytes);
//calloc()
//	void* calloc(size_t numBlocks, size_t blockSize);
//
//realloc()
//	void* realloc(void* oldBlock, size_t newSizeOfBytes);
//
//free()
//	void free(void* oldBlock);
	
	
	
	