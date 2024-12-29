#include <stdio.h>

int perfectNum(int n);

int main(){
	int n;
	printf("nhap vao so nguyen ");
	scanf("%d",&n);
	if(perfectNum(n)){
		printf("true");
	}else{
		printf("false");
	}
	return 0;
}

int perfectNum(int n){
    int tong = 1; 
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            tong += i;
            if(i != n / i){
                tong += n / i;
            }
        }
    }
    if(tong == n && n != 1){
        return 1;
    }
    return 0;
}
