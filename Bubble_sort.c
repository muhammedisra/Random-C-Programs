#include <stdio.h>
void sort(int [100],int);
void display(int [100],int);
void sort(int a[100], int n)
{
    int i,j,t;
   for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                 t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}
void display(int a[100],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void main()
{
    int n;
    printf("Enter the number of array elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elementsn\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    sort(a,n);
    display(a,n);
}