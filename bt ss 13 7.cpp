#include <stdio.h>
#define MAX_ROWS 100
#define MAX_COLS 100

int matrix[MAX_ROWS][MAX_COLS];

int input_matrix(int rows, int cols);

void output_matrix(int rows, int cols);

int main(){
	int rows, cols;
	printf("nhap vao so hang ");
	scanf("%d",&rows);
	printf("nhap vao so cot ");
	scanf("%d",&cols);
	int matrix[MAX_ROWS][MAX_COLS];
	input_matrix(rows,cols);
	output_matrix(rows,cols);
	return 0;
}

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
