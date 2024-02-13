#include <stdio.h>
int fact(int n);


int main()
{
    int n, k, num, i,term;

    printf("Enter number of rows : ");
    scanf("%d", &num);

    for(n=0; n<num; n++)
    {

        for(i=n; i<=num; i++)
            printf("%3c", ' ');

        for(k=0; k<=n; k++)
        {
            term = fact(n) / (fact(k) * fact(n-k));

            printf("%6lld", term);
        }

        printf("\n");
    }

    return 0;
}

int  fact(int n)
{
    int  factorial = 1ll;
    while(n)
    {
        factorial *= n;
        n--;
    }

    return factorial;
}