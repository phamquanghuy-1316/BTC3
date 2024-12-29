#include<stdio.h>
int sum(int a, int b){
	int tong=a+b;
	return tong;
}
int main(){
	int m,n;
	printf("nhap vao so nguyen thu nhat ");
	scanf("%d",&m);
	printf("nhap vao so nguyen thu hai ");
	scanf("%d",&n);
	printf("%d + %d = %d",m,n,sum(m,n));
	return 0;
}
