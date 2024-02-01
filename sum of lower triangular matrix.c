#include <stdio.h>

int main() {
    int a[10][10],i, j,n,sum;
    printf("Enter  matrix of row size: \n");
    scanf("%d",&n);
    printf("enter a element of matrix:\n ");
    
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j < i) {
            	sum=0;
                sum += a[i][j];
            }
        }
    }

    printf("  Sum of lower triangular matrix = %d", sum);

}
