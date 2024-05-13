#include<stdio.h>
void swap(int *a,int k,int c)
{
 int temp;
 temp=a[k];
 a[k]=a[c];
 a[c]=temp;
}
void quick(int a[6],int left,int right)
{
 int pivot,i,j;
 if(left<right)
 {
	i=left;
	j=right+1;
	pivot=a[left];
	do
	{
	do
		{i++;printf("%d %d %d\n",i,a[i],pivot);}
	while(a[i]<pivot);
	do
		j--;
	while(a[j]>pivot);
	if(i<j)
		swap(a,i,j);
	}while(i<j);
	swap(a,left,j);
	quick(a,left,j-1);
	quick(a,j+1,right);
 }
}
int main()
{
 int a[6],i,n;
 printf("\nEnter no. of elements: ");
 scanf("%d",&n);
 srand(time(0));
 int f=1;
 for(i=0;i<n;i++)
 {
	a[i]=f;
	f++;
  //a[i] = rand() % 100;
 }
 printf("%d\n\n",a[6]);
 quick(a,0,n-1);
 printf("\nSorted Array is: ");
 for(i=0;i<n;i++)
      printf("%d ",a[i]);
}
