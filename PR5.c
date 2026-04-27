// que 1

#include <stdio.h>

int main() {
    int a[5],n,i;
    
    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Negative elements are: ");
    for(i = 0; i < n; i++) {
        if(a[i] < 0) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}

// que 2

#include <stdio.h>

int main() {
    int a[10][10], i, j,n, m, max;

    
    printf("Enter rows: ");
    scanf("%d", &n);
    
    printf("Enter columns: ");
    scanf("%d", &m);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    max = a[0][0];
    for(i = 0; i <n; i++) {
        for(j = 0; j < m; j++) {
            if(a[i][j] > max) {
                max = a[i][j];
            }
        }
    }

    printf("Largest element=%d,max");

    return 0;
}

// que 3

#include <stdio.h>

int main() {
    int a[10][10], i, j, n, m;
    
    printf("Enter rows: ");
    scanf("%d", &n);
    
    printf("Enter columns: ");
    scanf("%d", &m);
    
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Transpose matrix:\n");
    for(j = 0; j < m; j++) {
        for(i = 0; i < n; i++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// que 4

#include <stdio.h>

int main() {
    int a[100][100], i, j, rows, cols;
    int row, col;
    int rowSum = 0, colSum = 0;

    printf("Enter rows: ");
    scanf("%d", &rows);

    printf("Enter columns: ");
    scanf("%d", &cols);

    printf("Enter elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter row number (0 to %d): ", rows - 1);
    scanf("%d", &row);

    printf("Enter column number (0 to %d): ", cols - 1);
    scanf("%d", &col);
    for(j = 0; j < cols; j++) {
        rowSum += a[row][j];
    }

    for(i = 0; i < rows; i++) {
        colSum += a[i][col];
    }

    printf("Row sum = %d\n", rowSum);
    printf("Column sum = %d\n", colSum);

    return 0;
}
