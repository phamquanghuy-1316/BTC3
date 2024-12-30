#include <stdio.h>
#define MAX_ROWS 100
#define MAX_COLS 100
int matrix[MAX_ROWS][MAX_COLS];

int input_matrix(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("nhap phan tu matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void output_matrix(int rows, int cols){
	for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}

void print_corner_element(int rows, int cols){
	printf("Cac phan tu o goc la: \n");
	for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if(i==0 && (j==0||j==cols-1) || i==rows-1 && (j==0||j==cols-1)){
            	printf("%d ",matrix[i][j]);
			}else{
				printf("   ");
			}
        }
        printf("\n");
    }
}

void matrix_boundary(int rows, int cols){
	printf("Cac phan tu o bien la: \n");
	for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if(i==0 || j==0 || i==rows-1 || j==cols-1){
            	printf("%d ",matrix[i][j]);
			}else{
				printf("  ");
			}
        }
        printf("\n");
    }
}

void duongcheo(int rows, int cols) {
	printf("Cac phan tu duong cheo chinh la: \n");
	for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if(i==j){
            	printf("%d ",matrix[i][j]);
			}else{
				printf("  ");
			}
        }
         printf("\n");
    }
    printf("\nCac phan tu tren duong cheo phu la: \n");
    for (int i = 0; i < rows; i++){
    	for(int j=0;j<cols;j++){
    		if(j==rows - 1 - i){
    			printf("%d ", matrix[i][j]);
			}else{
				printf("  ");
			}
		}
		printf("\n"); 
    }
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

void PrintPrime(int rows, int cols){
	printf("cac phan tu la so nguyen to la:\n ");
	for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++){
            if(is_Prime(matrix[i][j])){
            	printf("%d ",matrix[i][j]);
			}else{
				printf("  ");
			}
        }
        printf("\n");
    }
}

int main(){
	int rows, cols, choice;
	
do{
	printf("\nMENU\n");
	printf("1. nhap vao gia tri \n");
	printf("2. in ra cac phan tu cua mang theo ma tran\n");
	printf("3. in ra cac phan tu o goc theo ma tran\n");
	printf("4. in ra cac phan tu nam tren duong bien theo ma tran\n");
	printf("5. in ra cac phan tu nam tren duong cheo chinh va duong cheo phu theo ma tran\n");
	printf("6. in ra cac phan tu la so nguyen to theo ma tran\n");
	printf("7. thoat\n");	
	printf("nhap lua chon ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
		printf("nhap vao so hang ");
		scanf("%d",&rows);
		printf("nhap vao so cot ");
		scanf("%d",&cols);
		input_matrix(rows, cols);
			break;
		case 2:
			output_matrix(rows,cols);
			break;
		case 3:
			print_corner_element(rows,cols);
			break;
		case 4:
			matrix_boundary(rows,cols);
			break;
		case 5:
			duongcheo(rows,cols);
			break;
		case 6:
			PrintPrime(rows,cols);
			break;
		case 7:
			return 0;
		default:
			printf("lua chon khong hop le");
	}
}while(1);
	return 0;
}
