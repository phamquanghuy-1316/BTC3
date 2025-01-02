#include <stdio.h>
#include <string.h>

int main(){
	char string[100];
	int sochu=0,soso=0,sokytudb=0;
	printf("nhap vao 1 chuoi ky tu \n");
	fgets(string,sizeof(string),stdin);
	string[strcspn(string, "\n")]='\0';
	for(int i=0;string[i]!='\0';i++){
		if(string[i]>=65 && string[i]<=90 || string[i]>=97 && string[i]<=122){
			sochu++;
		}else if(string[i]>=48 && string[i]<=57){
			soso++;
		}else{
			sokytudb++;
		}
	}
	printf("trong chuoi co %d chu cai\n",sochu);
	printf("trong chuoi co %d chu so\n",soso);
	printf("trong chuoi co %d ky tu dac biet\n",sokytudb);
	return 0;
}
