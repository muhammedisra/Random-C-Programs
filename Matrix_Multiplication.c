#include <stdio.h>
void main()
{
    int A[100][100], B[100][100], C[100][100];
    int m,n,o,p,i,j,k;
    printf("Enter the no of rows and columns of first array\n");
    scanf("%d%d",&m,&n);
    printf("Enter the array elements\n");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&A[i][j]);
    printf("Enter the no of rows and columns of second array\n");
    scanf("%d%d",&o,&p);
    printf("Enter the array elements\n");
    for(i=0;i<o;i++)
    for(j=0;j<p;j++)
    scanf("%d",&B[i][j]);
    for(i=0;i<m;i++)
    for(j=0;j<p;j++)
    C[i][j] = 0;
    if(n!=o)
    printf("The matrix could not be multiplied\n");
    else
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<p;j++)
            {
                for(k=0;k<o;k++)
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<p;j++)
            printf("%d\t",C[i][j]);
            printf("\n");
        }
    }
}