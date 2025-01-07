#include <stdio.h>

void sort(int *arr, int size){
	int tmp;
	for(int i=0; i<size-1;i++){
		for(int j=i+1;j<size;j++){
			if(*(arr+i)>*(arr+j)){
				
				tmp=*(arr+i);
				*(arr+i)=*(arr+j);
				*(arr+j)=tmp;
			}
		}
	}
}

int main(){
	int size;
	printf("nhap vao so phan tu : ");
	scanf("%d",&size);
	int arr[size];
	
	for(int i=0; i<size;i++){
		scanf("%d",arr+i);
	}
	
	sort(arr,size);
	
	for(int i=0; i<size;i++){
		printf("%d ",*(arr+i));
	}
	return 0; 
}
