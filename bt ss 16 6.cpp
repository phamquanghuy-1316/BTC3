#include <stdio.h>

int findElement(int *arr,int *Element){
	for(int i=0; i<10;i++){
		if(*(arr+i)==*Element){
			return i;
		}
	}
	return 0;
}

int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int Element;
	printf("nhap vao phan tu muon tim : \n");
	scanf("%d",&Element);
	if(findElement(arr,&Element)){
		printf("phan tu nam o vi tri %d",findElement(arr,&Element));
	}else{
		printf("phan tu khong ton tai trong mang");
	}
	return 0; 
}
