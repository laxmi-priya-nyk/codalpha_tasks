#include <stdio.h>

void addMatrix(int r, int c, int A[r][c], int B[r][c]) {
    int i, j;

    printf("\nMatrix Addition:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", A[i][j] + B[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrix(int r1, int c1, int A[r1][c1],
                    int r2, int c2, int B[r2][c2]) {

    int i, j, k;
    int result[r1][c2];

    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            result[i][j] = 0;
            for(k = 0; k < c1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nMatrix Multiplication:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int r, int c, int A[r][c]) {
    int i, j;

    printf("\nTranspose Matrix:\n");
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++) {
            printf("%d ", A[j][i]);
        }
        printf("\n");
    }
}

int main() {
    int r, c, i, j;

    printf("Enter rows and columns of matrices: ");
    scanf("%d %d", &r, &c);

    int A[r][c], B[r][c];

    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    addMatrix(r, c, A, B);

    multiplyMatrix(r, c, A, r, c, B);

    transposeMatrix(r, c, A);

    return 0;
}