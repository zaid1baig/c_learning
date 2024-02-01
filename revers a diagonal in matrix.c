#include <stdio.h>
int main() {
    int m[10][10],i,j,n;
    printf("Enter matrix elements size :");
    scanf("%d",&n);
    printf("enter a matrix element:\n");
    
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    printf("Matrix:\n");
    for (i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            printf("%d\t ", m[i][j]);
        }
        printf("\n"); 
    }

    printf("Main Diagonal: ");
    i=n-1;
    for ( j = 0; j < n; j++) {
        printf("%d ", m[j][i]);
        --i;
    }
    printf("\n");
}