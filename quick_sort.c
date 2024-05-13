#include <stdio.h>
void sort(int [200],int, int);
void display(int [200],int);
void swap(int*,int,int);
void swap(int *a,int b,int c)
{
    int t;
    t=*(a+b);
    *(a+b)=*(a+c);
    *(a+c)=t;
}
void sort(int a[200],int l,int h)
{
    if(l<h)
    {
    int i,j,p;
    p=a[l];
    i=l+1;
    j=h;
    while(i<=j)
    {
        for(;i<=h && p>=a[i];i++);
        for(;j>=i && p<a[j];j--);
        if(i<j)
        swap(a,i,j);
    }
    swap(a,l,j);
    sort(a,l,j-1);
    sort(a,j+1,h);
    }
}
void display(int a[200],int n)
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
    srand(time(0));
    //printf("Enter the array elements\n");
    for(int i=0;i<n;i++)
    a[i] = rand() % 100;
    display(a,n);
    printf("\n\n");
    //scanf("%d",&a[i]);
    sort(a,0,n-1);
    display(a,n);
}