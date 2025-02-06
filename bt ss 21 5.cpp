#include <stdio.h>
#include <stdlib.h>

int main(){
	char str[1000];
	int line; 
	
	//nhap vao file
	printf("nhap vao so dong ");
	scanf("%d",&line);
	FILE *file = fopen("bt05.txt","w");
	if(file==NULL){
		printf("loi mo file ");
		exit(1);
	}
	
	getchar();
	for(int i=1; i<=line; i++){
		printf("nhap vao dong %d ",i);
		fgets(str,1000,stdin);
		fprintf(file,"%s",str);
	} 
	fclose(file);
	
	//in ra file
	file = fopen("bt05.txt","r");
	if(file==NULL){
		printf("loi mo file ");
		exit(1);
	}
	
	for(int i=1; i<=line; i++){
		fgets(str,1000,file);
		printf("%s",str);
	} 
	return 0;
}
