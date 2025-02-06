#include <stdio.h>
#include <stdlib.h>

int main(){
	char str[1000];

	FILE *file = fopen("bt01.txt","r");
	if(file==NULL){
		printf("loi mo file ");
		exit(1);
	}
	
	fgets(str, 1000, file);
	printf("%s",str);
	fclose(file);
	return 0;
}
