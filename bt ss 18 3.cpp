#include <stdio.h>
#include <string.h>
struct student{
	char name[20];
	int age;
	int phoneNumber;
}; 

void input(student *x){
	for(int i=0; i<5;i++){
	fflush(stdin);
	printf("nhap vao ten: ");
	fgets(x[i].name, 20, stdin);
	int len=(int)strlen(x[i].name);
	x[i].name[len-1]='\0'; 
	printf("nhap vao tuoi: ");
	scanf("%d",&x[i].age);
	printf("nhap vao SDT: ");
	scanf("%d",&x[i].phoneNumber);
  }
}

void output(student *x){
	for(int i=0; i<5; i++){
		printf("Ten: %s\nTuoi: %d\nSDT: %d\n",x[i].name,x[i].age,x[i].phoneNumber);
		printf("------------------------\n"); 
	}
}

int main(){
	struct student x[5];
	input(x);
	output(x);
	return 0; 
} 
