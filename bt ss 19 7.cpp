#include <stdio.h>
#define max_student 5
struct student{
	int id;
	char name[50];
	int age;
	char phonenum[15];
};
 
void PrintStudent(struct student student[], int size){
	for(int i=0; i<size; i++){
		printf("ID: %d, Name: %s, Age: %d, Phone: %s\n", student[i].id, student[i].name, student[i].age, student[i].phonenum);
	}
}

int deleteStudent(struct student student[],int deleteID,int size){
	int found=0;
	for(int i=0; i<size; i++){
		if(student[i].id==deleteID){
			found=1;
			for(int j=i;j<size-1;j++){
				student[j] = student[j + 1];
			}
			return size-1;
		}
	}
	if(!found){
		printf("sinh vien mang ID %d khong ton tai ",deleteID);
	}
	
}

int main(){
	struct student student[max_student] = {
		
		{1, "Nguyen Van A", 20, "0123456789"},
        {2, "Tran Thi B", 21, "0987654321"},
        {3, "Le Van C", 22, "0345678912"},
        {4, "Pham Van D", 19, "0765432109"},
        {5, "Hoang Thi E", 23, "0912345678"}
		
	};
	
	int deleteID,size=max_student;
	PrintStudent(student,size);

	printf("nhap vao id sinh vien muon xoa: ");
	scanf("%d",&deleteID);
	
	size=deleteStudent(student,deleteID,size);
	
	PrintStudent(student,size);
	return 0; 
} 
