#include<stdio.h>
int UCLN(int a, int b){
	int tmp;
	while(a!=b){
		if(a<b){
			tmp=b;
			b=a;
			a=tmp;
		}
		tmp=a-b;
		a=b;
		b=tmp;
	}
	return a;
}

int main(){
	int a,b;
	printf("nhap vao so nguyen a ");
	scanf("%d",&a);
	printf("nhap vao so nguyen b ");
	scanf("%d",&b);
	int ucln=UCLN(a,b);
	printf("uoc chung lon nhat cua %d va %d la %d", a, b, ucln);
}
