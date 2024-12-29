#include <stdio.h>

int MaxElement(int arr[], int size, int max);

int main(){
	int arr[]={3,4,1,6,5,2,3,8,12,5};
	int size=sizeof(arr)/sizeof (int);
	int max=MaxElement(arr,size,max);
	printf("so lon nhat trong mang la %d",max);
	return 0;
}

int MaxElement(int arr[], int size, int max){
	max=arr[0];
	for(int i=0;i<size;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	return max;
}
