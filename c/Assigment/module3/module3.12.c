#include <stdio.h>

int main() {
    int matrix[100][100], max_num;
    int row, col, i, j;

    
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

   
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    max_num = matrix[0][0];
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (matrix[i][j] > max_num) {
                max_num = matrix[i][j];
            }
        }
    }


	    printf("The maximum number in the matrix is %d.\n", max_num);

    return 0;
}
