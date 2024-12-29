#include <stdio.h>

void print(int array[], int size);
int main(){
	int arr[]={1,2,3,4,5,6};
	int size = sizeof(arr)/sizeof (int);
	 print(arr,size);
	return 0;
}

void print(int array[], int size){
	for(int i=0; i<size; i++){
		printf("%d ",array[i]);
	}
}
