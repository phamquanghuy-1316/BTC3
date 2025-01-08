#include <stdio.h>

struct student{
	char name[20];
	int age;
	int phoneNumber;
}; 

void input(student *x){
	printf("nhap vao ten: ");
	gets(x->name);
	printf("nhap vao tuoi: ");
	scanf("%d",&x->age);
	printf("nhap vao SDT: ");
	scanf("%d",&x->phoneNumber);	
};

int main(){
	struct student x;
	input(&x);
	printf("Ten: %s\nTuoi: %d\nSDT: %d",x.name,x.age,x.phoneNumber);
	return 0; 
} 
