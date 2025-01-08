#include <stdio.h>
#include <string.h>
struct student{
	//khai bao cau truc sinh vien 
	int id; 
	char name[20];
	int age;
	int phoneNumber;
}; 

void input(student *x){
	for(int i=0; i<5;i++){
	x[i].id=i+1; 
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
 
		printf("ID:%d \nTen: %s\nTuoi: %d\nSDT: %d\n",x[i].id,x[i].name,x[i].age,x[i].phoneNumber);
		printf("------------------------\n"); 
	}
}

int main(){
	struct student x[50];
	input(x);
	output(x);
	return 0; 
} 
