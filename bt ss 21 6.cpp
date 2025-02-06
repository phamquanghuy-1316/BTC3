#include <stdio.h>
#include <stdlib.h>

int main(){
	char str[1000];
	FILE *file1 = fopen("bt01.txt","r");
	if(file1==NULL){
		printf("loi mo file ");
		exit(1);
	}
	FILE *file6 = fopen("bt06.txt","w");
	if(file6==NULL){
		printf("loi mo file ");
		exit(1);
	}
	while(fgets(str,1000,file1) != NULL){
		fputs(str,file6);
	}
	fclose(file1);
	fclose(file6);
	return 0;
}
