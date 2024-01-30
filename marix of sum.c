#include <stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,n,m;
    printf("enter a value of matrix: ");
    scanf("%d",&n);
    printf("enter a size of matrix: ");
    scanf("%d",&m);
    printf("Enter elements in matrix A : \n");
    
    
    
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter a matrix B : \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nSum of matrices  \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}