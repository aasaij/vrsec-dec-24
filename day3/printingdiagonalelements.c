#include <stdio.h>
//Program to print Main diagonal and off diagonal elements
int main(){
	int rowSize, colSize;
	scanf("%dx%d", &rowSize, &colSize);
	if (rowSize == colSize){
		int arr[rowSize][colSize];
		for (int i =0; i<rowSize;i++)
			for (int j = 0; j<colSize;j++)
				scanf("%d",&arr[i][j]);
		//Printing main diagonal elements
		for (int i = 0; i<rowSize; i++)
			printf("%d ", arr[i][i]);
		printf("\n");
		//Printing off diagonal elements
		for (int i = 0; i<rowSize; i++)
			printf("%d ", arr[i][colSize-i-1]);					
	}

	return 0;
}