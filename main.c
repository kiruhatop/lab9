/* 
Жигунов Кирилл Андреевич
П.И. 1-1
Двумерные массивы и обработка матриц
*/

#include <stdio.h>
#define LIMIT 5

int main(void) {
	int a[LIMIT][LIMIT], b[LIMIT][LIMIT];
	int rows, cols;
	printf("Enter rows and cols(1-5): ");
	if(scanf("%d%d", &rows, &cols) != 2) {
	    printf("Input error\n");
	    return 1;
	}
	if(rows<1 || rows>LIMIT || cols<1 || cols>LIMIT) {
	    printf("Size error\n");
	    return 1;
	}
	for(int row = 0; row < rows; row++){
	    for(int col = 0; col < cols; col++){
	        if(scanf("%d", &a[row][col]) != 1){
	            printf("Input error\n");
	            return 1;
	        }
	        if(a[row][col] < -1000 || a[row][col] > 1000){
	            printf("Value error\n");
	            return 1;
	        }
	    }
	}
    long long total = 0;
    printf("Matrix:\n");
    for (int row = 0; row < rows; row++) {
        long long rowSum = 0;
        for (int col = 0; col < cols; col++) {
            printf("%6d", a[row][col]);
            rowSum += a[row][col];
            total += a[row][col];
        }
        printf("\nRow %d sum = %lld\n", row, rowSum);
    }
    printf("Total = %lld\n", total);
    
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col<cols; col++ ) {
            b[col][row] = a[row][col];
        }
    }
    printf("Transposed:\n");
    for (int row = 0; row < cols; row++) {
        for (int col = 0; col<rows; col++ ) {
            printf("%6d", b[row][col]);
        }
        printf("\n");
    }
    return 0;
}

