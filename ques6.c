#include <stdio.h>

int main() {
    int arr[10][10], i, j, n;

    printf("Input the size of the square matrix : ");
    scanf("%d", &n);

    printf("Input elements in the matrix :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The matrix is :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nSetting zero in upper triangular matrix\n");
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < n; j++) {
            if (i >= j) {
                printf("%d\t", arr[i][j]); 
            } else {
                printf("%d\t", 0); 
            }
        }
    }
    printf("\n\n");

    return 0;
}