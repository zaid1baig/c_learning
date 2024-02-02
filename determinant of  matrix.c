#include <stdio.h>

int main()
{
    int a[100][100], i, j, det,n;

    printf("Enter elements in matrix of size: \n");
    scanf("%d",&n);
    printf("enter a element of martix: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    
	}
	 det = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);


 
    printf("Determinant of matrix A = %ld", det);
}