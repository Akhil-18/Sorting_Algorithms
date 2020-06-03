// C program for implementation of selection sort 
#include <stdio.h> 

void swap(int *num1,int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}


void selectionSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int min_index = i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        swap(&arr[min_index],&arr[i]);
    }
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

// Driver program to test above functions 
int main() 
{ 
	int arr[] = {64, 25, 12, 22, 11}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
    // int n = sizeof(arr);
	selectionSort(arr, n); 
	printf("Sorted array: \n"); 
	printArray(arr, n); 
	return 0; 
} 
