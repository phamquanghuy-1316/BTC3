#include <stdio.h>

struct student{
	char name[20];
	int age;
	int phoneNumber;
}; 

int main(){
	struct student student1 = {"Pham Quang Huy", 18, 123456789};
	printf("Ten: %s\nTuoi: %d\nSDT: %d",student1.name,student1.age,student1.phoneNumber);
	return 0; 
} 
