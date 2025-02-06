#include <stdio.h>
#include <stdlib.h>

int main(){
	char ch;
	
	FILE *file = fopen("bt01.txt","r");
	if(file==NULL){
		printf("loi mo file ");
		exit(1);
	}
	
	ch = fgetc(file);
	if(ch!=EOF){
		printf("ky tu dau tien trong file la %c",ch);
	}else{
		printf("file rong");
	}
	
	fclose(file);
	return 0;
}
