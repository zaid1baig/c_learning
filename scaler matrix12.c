#include <stdio.h>
#define size 3 

int main()
{
    int a[size][size]; 
    int num, row, col;
    
    printf("Enter elements in matrix of size %dx%d: \n", size,size);
    for(row=0; row<size; row++)
    {
        for(col=0; col<size; col++)
        {
            scanf("%d", &a[row][col]);
        }
    }
    
    printf("Enter a any number to multiply  matrix A: ");
    scanf("%d", &num);

    for(row=0; row<size; row++)
    {
        for(col=0; col<size; col++)
        {

            a[row][col] = num * a[row][col];
        }
    }
    
    printf("\nResultant matrix c.A = \n");
    for(row=0; row<size; row++)
    {
        for(col=0; col<size; col++)
        {
            printf("%d ", a[row][col]);
        }
        printf("\n");
    }

}