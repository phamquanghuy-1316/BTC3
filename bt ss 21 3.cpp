#include <stdio.h>
#include <stdlib.h>

int main(){
	char str[1000];

	FILE *file = fopen("bt01.txt","a");
	if(file==NULL){
		printf("loi mo file ");
		exit(1);
	}
	
	fgets(str, 1000, stdin);
	fprintf(file,"%s",str);
	
	fclose(file);
	return 0;
}
