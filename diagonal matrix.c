#include <stdio.h>
#define size 3 

int main()
{
    int a[size][size],row, col, sum = 0;

    printf("Enter elements in matrix of size %dx%d: \n", size,size);
    for(row=0; row<size; row++)
    {
        for(col=0; col<size; col++)
        {
            scanf("%d", &a[row][col]);
        }
    }

    for(row=0; row<size; row++)
    {
        sum = sum + a[row][row];
    }

    printf("\nSum of main diagonal elements = %d", sum);

}