#include <stdio.h>
#include <string.h>

int main(){
	char string[100];
	printf("nhap vao 1 chuoi\n");
	fgets(string,sizeof(string),stdin);
	string[strcspn(string, "\n")]='\0';
	for(int i=0;string[i]!='\0';i++){
		if(string[i]==' '&&string[i+1]!=' '){
		string[i+1]-=32; 
		}if(string[0]>=97 && string[0]<=122) {
			string[0]-=32;
		}
	}
	printf("%s",string);
	return 0;
}
