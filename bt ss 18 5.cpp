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
	x[0].id=1;
	strcpy(x[0].name, "Nguyen Van A");
	x[0].age=16;
	
	x[1].id=2;
	strcpy(x[1].name, "Nguyen Van B");
	x[1].age=18;
	
	x[2].id=3;
	strcpy(x[2].name, "Nguyen Van C");
	x[2].age=15;
	
	x[3].id=4;
	strcpy(x[3].name, "Nguyen Van D");
	x[3].age=19;
	
	x[4].id=5;
	strcpy(x[4].name, "Nguyen Van E");
	x[4].age=17; 
} 
 
void output(student *x){
	for(int i=0; i<5; i++){
		printf("ID:%d \nTen: %s\nTuoi: %d\nSDT: %d\n",x[i].id,x[i].name,x[i].age,x[i].phoneNumber);
		printf("------------------------\n"); 
	}
}

int findindex(student *x){
	int editID; 
	printf("nhap vao ID sinh vien muon sua ");
	scanf("%d",&editID); 
	for(int i=0; i<5; i++){
		if(x[i].id==editID){
			
			printf("nhap ten moi ");
			fflush(stdin);
			fgets(x[i].name, 20, stdin);
			int len=(int)strlen(x[i].name);
			x[i].name[len-1]='\0';
			
			printf("nhap tuoi moi ");
			scanf("%d",&x[i].age);
			
			printf("danh sach moi la : \n"); 
			output(x);
		}
	}
	printf("khong tim thay"); 
}

int main(){
	struct student x[50];
	input(x); 
	output(x);
	findindex(x);

	return 0; 
} 
