#include <stdio.h>
#include <stdlib.h>

int main(){
	char str[1000];
	
	FILE *file = fopen("bt01.txt","w");
	if(file==NULL){
		printf("loi mo file ");
		exit(1);
	}
	
	printf("nhap vao chuoi bat ky ");
	fgets(str,1000,stdin);
	
	fprintf(file,"%s",str);
	
	fclose(file);
	return 0;
}
