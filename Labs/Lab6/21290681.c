#include <stdio.h>
#include <stdlib.h>

int main() {
	int **matrix;
    	int rows, cols;
    	int i, j;
    	int direction = 0; 

    	scanf("%d %d", &rows, &cols);
    	matrix = (int **)malloc(rows * sizeof(int *));
    	for (i = 0; i < rows; i++) {
        	matrix[i] = (int *)malloc(cols * sizeof(int));
    	}

    	for (i = 0; i < rows; i++) {
        	for (j = 0; j < cols; j++) {
            		scanf("%d", &matrix[i][j]);
        	}
    	}

    	int r = 0;
    	int c = 0;
    	while (r < rows && c < cols) {
        	if (direction == 0) {  // right
            		for (i = c; i < cols; i++) {
                		printf("%d ", matrix[r][i]);
            		}
            	r++;
        	} 
		else if (direction == 1) {  // down
            		for (i = r; i < rows; i++) {
                		printf("%d ", matrix[i][cols - 1]);
            		}
            	cols--;
        	}
		else if (direction == 2) {  // left
            		for (i = cols - 1; i >= c; i--) {
                		printf("%d ", matrix[rows - 1][i]);
            		}
            	rows--;
        	}
		else if (direction == 3) {  // up
            		for (i = rows - 1; i >= r; i--) {
                		printf("%d ", matrix[i][c]);
            		}
            	c++;
        	}
        	direction = (direction + 1) % 4;
    		}
    	return 0;
	}
