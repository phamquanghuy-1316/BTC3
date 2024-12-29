#include <stdio.h>
int is_Prime(int a);

int main(){
	int n;
	for(int i=1;i<3;i++){
		printf("nhap vao so nguyen thu %d ",i);
		scanf("%d",&n);
		if(is_Prime(n)){
			printf("true");
		}else{
			printf("false");
		}
		printf("\n");
	}
	return 0;
} 

int is_Prime(int a){
	if(a<=1){
		return 0;
	}else{
		for(int i=2; i*i<=a; i++){
			if(a%i==0){
				return 0;
			}
			return 1;
		}
	}
}
