#include <stdio.h>

void updateElement(int *arr,int *newValue, int *index){
	*(arr + *index)=newValue;
	for(int i=0; i<10;i++){
		printf("%d ",*(arr+i));
	}
}

int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int newValue, index;
	printf("cap nhat phan tu o vi tri : \n");
	scanf("%d",&index);
	if(index<0){
		index=0;
	}if(index>9){
		index=9;
	}
	printf("nhap vao gia tri muon sua : \n");
	scanf("%d",&newValue);
	updateElement(arr,&newValue,&index);
	return 0; 
} 
