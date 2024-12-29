#include <stdio.h>

int funsion(int a);


int main(){
	int n;
	printf("nhap vao 1 so nguyen ");
	scanf("%d",&n);
	int factorial=funsion(n);
	printf("%d! = %d",n,factorial);
	return 0;
}

int funsion(int a){
	int factorial=1;
	for (int i=0;i<a;i++){
		factorial*=a-i;
	}
	return factorial;
}
